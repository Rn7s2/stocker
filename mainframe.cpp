#include "mainframe.h"
#include "gui.h"
#include "database.h"
#include "searchdialog.h"
#include "addexisteddialog.h"
#include "addnewdialog.h"
#include "stockoutdialog.h"
#include "detaildialog.h"
#include "modifydialog.h"

Database db;

MainFrame::MainFrame() : GUI::MainFrame(nullptr, wxID_ANY)
{
    loadGrid();
}

void MainFrame::loadGrid()
{
    m_grid->ClearGrid();
    if (m_grid->GetNumberRows())
        m_grid->DeleteRows(0, m_grid->GetNumberRows());

    m_grid->SetColLabelValue(0, _("Name"));
    m_grid->SetColLabelValue(1, _("Code"));
    m_grid->SetColLabelValue(2, _("Number"));
    m_grid->SetColLabelValue(3, _("Price"));
    m_grid->SetColLabelValue(4, _("Expiration"));

    m_grid->SetColSize(0, 250);
    m_grid->SetColSize(1, 250);
    m_grid->SetColSize(2, 75);
    m_grid->SetColSize(3, 75);
    m_grid->SetColSize(4, 150);

    size_t i = 0;
    for (auto it = db.item.begin(); it != db.item.end(); it++, i++) {
        m_grid->AppendRows();
        m_grid->SetCellValue(i, 0, it->name);
        m_grid->SetCellValue(i, 1, it->id);
        m_grid->SetCellValue(i, 2, wxString::Format(wxT("%lu"), it->num));
        m_grid->SetCellValue(i, 3, wxString::Format(wxT("%.1lf"), it->price));
        m_grid->SetCellValue(i, 4, it->expiration.FormatISODate());

        if (it->num <= 2)
            m_grid->SetCellBackgroundColour(i, 2, *wxBLUE);

        int rem = (it->expiration - wxDateTime::Today()).GetDays();
        if (rem <= 60)
            m_grid->SetCellBackgroundColour(i, 4, *wxGREEN);
    }
}

void MainFrame::updateRow(const Item &o, const Item &t)
{
    for (size_t i = 0; i < m_grid->GetNumberRows(); i++) {
        if (m_grid->GetCellValue(i, 0) != o.name || m_grid->GetCellValue(i, 1) != o.id)
            continue;
        m_grid->SetCellBackgroundColour(i, 2, *wxWHITE);
        m_grid->SetCellBackgroundColour(i, 4, *wxWHITE);
        m_grid->SetCellValue(i, 0, t.name);
        m_grid->SetCellValue(i, 1, t.id);
        m_grid->SetCellValue(i, 2, wxString::Format(wxT("%lu"), t.num));
        m_grid->SetCellValue(i, 3, wxString::Format(wxT("%.1lf"), t.price));
        m_grid->SetCellValue(i, 4, t.expiration.FormatISODate());
        if (t.num <= 2)
            m_grid->SetCellBackgroundColour(i, 2, *wxBLUE);

        int rem = (t.expiration - wxDateTime::Today()).GetDays();
        if (rem <= 60)
            m_grid->SetCellBackgroundColour(i, 4, *wxGREEN);
        break;
    }
}

// add existed
void MainFrame::m_ribbonButton1OnRibbonButtonClicked(wxRibbonButtonBarEvent &event)
{
    SearchDialog searchDialog(this);
    if (searchDialog.ShowModal() != wxID_OK)
        return;
    Item item = searchDialog.m_item;
    if (!item.isValid()) {
        wxMessageBox(_("Please select one item."), _("Search failed"), wxOK, this);
        return;
    }

    AddExistedDialog dialog(this);

    if (dialog.ShowModal() != wxID_OK)
        return;

    Item tmp = item;
    tmp.num += dialog.num;

    auto it = tmp.record.end();
    it--;
    if (it->time == wxDateTime::Today() && it->cnt > 0)
        it->cnt += dialog.num;
    else
        tmp.record.emplace_back(dialog.num, wxDateTime::Today());
    db.ModifyItem(item, tmp);
    updateRow(item, tmp);
}

// add new
void MainFrame::m_ribbonButton2OnRibbonButtonClicked(wxRibbonButtonBarEvent &event)
{
    AddNewDialog dialog(this);
    if (dialog.ShowModal() != wxID_OK)
        return;
    Item item;
    item.id = dialog.id;
    item.name = dialog.name;
    item.num = dialog.num;
    item.expiration = dialog.expiration;
    item.price = dialog.price;
    item.record.emplace_back(item.num, wxDateTime::Today());
    if (db.SearchItemByCode(item.id).isValid()) {
        wxMessageBox(_("Item exists, please use Add Existed function."), _("Item exists"), wxOK);
        return;
    }
    db.InsertItem(item);

    m_grid->InsertRows();
    m_grid->SetCellValue(0, 0, item.name);
    m_grid->SetCellValue(0, 1, item.id);
    m_grid->SetCellValue(0, 2, wxString::Format(wxT("%lu"), item.num));
    m_grid->SetCellValue(0, 3, wxString::Format(wxT("%.1lf"), item.price));
    m_grid->SetCellValue(0, 4, item.expiration.FormatISODate());
    if (item.num <= 2)
        m_grid->SetCellBackgroundColour(0, 2, *wxBLUE);

    int rem = (item.expiration - wxDateTime::Today()).GetDays();
    if (rem <= 60)
        m_grid->SetCellBackgroundColour(0, 4, *wxGREEN);
}

// stock out
void MainFrame::m_ribbonButton3OnRibbonButtonClicked(wxRibbonButtonBarEvent &event)
{
    SearchDialog searchDialog(this);
    if (searchDialog.ShowModal() != wxID_OK)
        return;
    Item item = searchDialog.m_item;
    if (!item.isValid()) {
        wxMessageBox(_("Please select one item."), _("Search failed"), wxOK, this);
        return;
    }

    StockOutDialog dialog(this);
    if (dialog.ShowModal() != wxID_OK)
        return;

    if ((long) item.num + dialog.num < 0) {
        wxMessageBox(_("No enough items."), _("Stock out failed"));
        return;
    }

    Item tmp = item;
    tmp.num += dialog.num;

    auto it = tmp.record.end();
    it--;
    if (it->time == wxDateTime::Today() && it->cnt < 0)
        it->cnt += dialog.num;
    else
        tmp.record.emplace_back(dialog.num, wxDateTime::Today());
    db.ModifyItem(item, tmp);
    updateRow(item, tmp);
}

// detail
void MainFrame::m_ribbonButton4OnRibbonButtonClicked(wxRibbonButtonBarEvent &event)
{
    SearchDialog searchDialog(this);
    if (searchDialog.ShowModal() != wxID_OK)
        return;
    Item item = searchDialog.m_item;
    if (!item.isValid()) {
        wxMessageBox(_("Please select one item."), _("Search failed"), wxOK, this);
        return;
    }

    DetailDialog dialog(this, item);
    dialog.ShowModal();
}

// modify
void MainFrame::m_ribbonButton5OnRibbonButtonClicked(wxRibbonButtonBarEvent &event)
{
    SearchDialog searchDialog(this);
    if (searchDialog.ShowModal() != wxID_OK)
        return;
    Item item = searchDialog.m_item;
    if (!item.isValid()) {
        wxMessageBox(_("Please select one item."), _("Search failed"), wxOK, this);
        return;
    }

    ModifyDialog dialog(this);
    dialog.name = item.name;
    dialog.id = item.id;
    dialog.expiration = item.expiration;
    dialog.price = item.price;

    if (dialog.ShowModal() != wxID_OK)
        return;

    if (dialog.id != item.id && db.SearchItemByCode(dialog.id).isValid()) {
        wxMessageBox(_("Item exists, please use Add Existed function."), _("Item exists"), wxOK);
        return;
    }

    Item tmp = item;
    tmp.name = dialog.name;
    tmp.id = dialog.id;
    tmp.expiration = dialog.expiration;
    tmp.price = dialog.price;

    db.ModifyItem(item, tmp);
    updateRow(item, tmp);
}

// delete
void MainFrame::m_ribbonButton6OnRibbonButtonClicked(wxRibbonButtonBarEvent &event)
{
    SearchDialog searchDialog(this);
    if (searchDialog.ShowModal() != wxID_OK)
        return;
    Item item = searchDialog.m_item;
    if (!item.isValid()) {
        wxMessageBox(_("Please select one item."), _("Search failed"), wxOK, this);
        return;
    }

    GUI::DeleteDialog dialog(this);
    if (dialog.ShowModal() != wxID_OK)
        return;

    db.DeleteItem(item);

    for (size_t i = 0; i < m_grid->GetNumberRows(); i++) {
        if (m_grid->GetCellValue(i, 0) != item.name || m_grid->GetCellValue(i, 1) != item.id)
            continue;
        m_grid->DeleteRows(i);
        break;
    }
}

// TODO: statistic
void MainFrame::m_ribbonButton7OnRibbonButtonClicked(wxRibbonButtonBarEvent &event)
{
    GUI::StatisticDialog statistic(this);
    statistic.ShowModal();
}

void MainFrame::m_ribbonButton8OnRibbonButtonClicked(wxRibbonButtonBarEvent &event)
{
    GUI::AboutDialog dialog(this);
    dialog.ShowModal();
}
