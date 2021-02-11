//
// Created by rn7s2 on 2021/2/11.
//

#ifndef STOCKER_DETAILDIALOG_H
#define STOCKER_DETAILDIALOG_H

#include "gui.h"
#include "database.h"

class DetailDialog : public GUI::DetailDialog
{
public:
    DetailDialog(wxFrame *frame, const Item &t);

    void m_datePicker2OnDateChanged(wxDateEvent &event);

    void m_datePicker3OnDateChanged(wxDateEvent &event);

private:
    Item item;
};


#endif //STOCKER_DETAILDIALOG_H
