#ifndef ADDEXISTEDDIALOG_H
#define ADDEXISTEDDIALOG_H

#include "gui.h"

class AddExistedDialog : public GUI::AddExistedDialog
{
public:
    AddExistedDialog(wxFrame* frame);
    bool TransferDataFromWindow();

public:
    unsigned long num;
};

#endif // ADDEXISTEDDIALOG_H
