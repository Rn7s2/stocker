//
// Created by rn7s2 on 2021/2/11.
//

#ifndef STOCKER_STOCKOUTDIALOG_H
#define STOCKER_STOCKOUTDIALOG_H

#include "gui.h"

class StockOutDialog : public GUI::StockOutDialog
{
public:
    StockOutDialog(wxFrame *frame);

    bool TransferDataFromWindow();

public:
    long num;
};


#endif //STOCKER_STOCKOUTDIALOG_H
