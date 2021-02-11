//
// Created by rn7s2 on 2021/2/11.
//

#ifndef STOCKER_MODIFYDIALOG_H
#define STOCKER_MODIFYDIALOG_H

#include "gui.h"

class ModifyDialog : public GUI::ModifyDialog
{
public:
    ModifyDialog(wxFrame* frame);
    bool TransferDataToWindow() override;
    bool TransferDataFromWindow() override;

public:
    double price;
    wxString id;
    wxString name;
    wxDateTime expiration;
};


#endif //STOCKER_MODIFYDIALOG_H
