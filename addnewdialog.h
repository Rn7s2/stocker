#ifndef ADDNEWDIALOG_H
#define ADDNEWDIALOG_H

#include "gui.h"

class AddNewDialog : public GUI::AddNewDialog
{
public:
    AddNewDialog(wxFrame *frame);

    bool TransferDataFromWindow();

    void m_textCtrl1OnText(wxCommandEvent &event);
    void m_textCtrl2OnText(wxCommandEvent &event);
    void m_textCtrl1OnChar(wxKeyEvent& event);
    void m_textCtrl2OnChar(wxKeyEvent& event);

public:
    double price;
    wxString id;           // 条码
    wxString name;         // 名称
    wxDateTime expiration; // 保质期
    unsigned long num;
};

#endif // ADDNEWDIALOG_H
