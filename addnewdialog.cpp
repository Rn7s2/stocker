#include "addnewdialog.h"

AddNewDialog::AddNewDialog(wxFrame *frame)
        : GUI::AddNewDialog(frame)
{}

bool AddNewDialog::TransferDataFromWindow()
{
    name = m_textCtrl1->GetValue();
    id = m_textCtrl2->GetValue();
    expiration = m_datePicker->GetValue();
    price = m_spinCtrlDouble->GetValue();
    num = m_spinCtrl->GetValue();
    return true;
}

void AddNewDialog::m_textCtrl1OnText(wxCommandEvent &event)
{
    m_button1->Enable(!m_textCtrl1->IsEmpty() && !m_textCtrl2->IsEmpty());
}

void AddNewDialog::m_textCtrl2OnText(wxCommandEvent &event)
{
    m_button1->Enable(!m_textCtrl1->IsEmpty() && !m_textCtrl2->IsEmpty());
}

void AddNewDialog::m_textCtrl1OnChar(wxKeyEvent &event)
{
    if(event.GetKeyCode() == '|')
        wxBell();
    else
        event.Skip();
}

void AddNewDialog::m_textCtrl2OnChar(wxKeyEvent &event)
{
    if(event.GetKeyCode() == '|')
        wxBell();
    else
        event.Skip();
}
