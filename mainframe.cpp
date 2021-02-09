#include "mainframe.h"
#include "gui.h"

MainFrame::MainFrame() : GUI::MainFrame(nullptr, wxID_ANY)
{
    m_grid->SetColLabelValue(0, _("Name"));
    m_grid->SetColLabelValue(1, _("Code"));
    m_grid->SetColLabelValue(2, _("Number"));
    m_grid->SetColLabelValue(3, _("Price"));
    m_grid->SetColLabelValue(4, _("Expiration"));

    m_grid->SetColumnWidth(0, 250);
    m_grid->SetColumnWidth(1, 250);
    m_grid->SetColumnWidth(2, 75);
    m_grid->SetColumnWidth(3, 75);
    m_grid->SetColumnWidth(4, 150);

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

void MainFrame::m_ribbonButton1OnRibbonButtonClicked(
    wxRibbonButtonBarEvent &event)
{
    GUI::SearchDialog searchDialog(this);
    searchDialog.ShowModal();
}

void MainFrame::m_ribbonButton2OnRibbonButtonClicked(
    wxRibbonButtonBarEvent &event)
{
	GUI::SearchDialog searchDialog(this);
	searchDialog.ShowModal();
}

void MainFrame::m_ribbonButton3OnRibbonButtonClicked(
    wxRibbonButtonBarEvent &event)
{
	GUI::SearchDialog searchDialog(this);
	searchDialog.ShowModal();
}

void MainFrame::m_ribbonButton4OnRibbonButtonClicked(
    wxRibbonButtonBarEvent &event)
{
	GUI::SearchDialog searchDialog(this);
	searchDialog.ShowModal();
}

void MainFrame::m_ribbonButton5OnRibbonButtonClicked(
    wxRibbonButtonBarEvent &event)
{
	GUI::SearchDialog searchDialog(this);
	searchDialog.ShowModal();
}

void MainFrame::m_ribbonButton6OnRibbonButtonClicked(
    wxRibbonButtonBarEvent &event)
{
	GUI::StatisticDialog statistic(this);
	statistic.ShowModal();
}

void MainFrame::m_ribbonButton7OnRibbonButtonClicked(
    wxRibbonButtonBarEvent &event)
{
	GUI::AboutDialog dialog(this);
	dialog.ShowModal();
}

void MainFrame::m_ribbonButton8OnRibbonButtonClicked(
    wxRibbonButtonBarEvent &event)
{
	GUI::HelpDialog dialog(this);
	dialog.m_richText->AppendText(wxT("Currently, there's no help."));
	dialog.ShowModal();
}
