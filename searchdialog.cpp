#include "searchdialog.h"

SearchDialog::SearchDialog(wxFrame *frame)
        : GUI::SearchDialog(frame)
{
    m_listCtrl->InsertColumn(0, _("Code"), wxLIST_FORMAT_CENTER, 245);
    m_listCtrl->InsertColumn(1, _("Name"), wxLIST_FORMAT_CENTER, 245);
    m_listCtrl->InsertColumn(2, _("Number"), wxLIST_FORMAT_CENTER, 75);
    m_listCtrl->InsertColumn(3, _("Price"), wxLIST_FORMAT_CENTER, 75);
    m_listCtrl->InsertColumn(4, _("Expiration"), wxLIST_FORMAT_CENTER, 145);
}

void SearchDialog::m_textCtrlOnText(wxCommandEvent &event)
{
    auto tmp = db.SearchItem(m_textCtrl->GetValue());
    m_listCtrl->DeleteAllItems();
    size_t i = 0;
    for (auto it = tmp.begin(); it != tmp.end(); it++, i++) {
        m_listCtrl->InsertItem(i, it->id);
        m_listCtrl->SetItem(i, 1, it->name);
        m_listCtrl->SetItem(i, 2, wxString::Format(wxT("%lu"), it->num));
        m_listCtrl->SetItem(i, 3, wxString::Format(wxT("%.1lf"), it->price));
        m_listCtrl->SetItem(i, 4, it->expiration.FormatISODate());
    }
}

void SearchDialog::m_listCtrlOnListItemSelected(wxListEvent &event)
{
    m_item = db.SearchItemByCode(event.GetText());
}

void SearchDialog::m_listCtrlOnListItemActivated(wxListEvent &event)
{
    EndModal(wxID_OK);
}
