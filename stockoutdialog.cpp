//
// Created by rn7s2 on 2021/2/11.
//

#include "stockoutdialog.h"

StockOutDialog::StockOutDialog(wxFrame *frame)
    : GUI::StockOutDialog(frame)
{}

bool StockOutDialog::TransferDataFromWindow()
{
    num = 0 - m_spinCtrl->GetValue();
    return true;
}
