//
// Created by rn7s2 on 2021/2/11.
//

#include "modifydialog.h"

ModifyDialog::ModifyDialog(wxFrame *frame)
    : GUI::ModifyDialog(frame)
{}

bool ModifyDialog::TransferDataToWindow()
{
    m_textCtrl1->SetValue(name);
    m_textCtrl2->SetValue(id);
    m_datePicker->SetValue(expiration);
    m_spinCtrlDouble->SetValue(price);
    return true;
}

bool ModifyDialog::TransferDataFromWindow()
{
    name = m_textCtrl1->GetValue();
    id = m_textCtrl2->GetValue();
    expiration = m_datePicker->GetValue();
    price = m_spinCtrlDouble->GetValue();
    return true;
}
