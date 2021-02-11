#ifndef SEARCHDIALOG_H
#define SEARCHDIALOG_H

#include "gui.h"
#include "database.h"

extern Database db;

class SearchDialog : public GUI::SearchDialog
{
public:
    SearchDialog(wxFrame* frame);

    void m_textCtrlOnText(wxCommandEvent& event);
    void m_listCtrlOnListItemSelected(wxListEvent& event);
    void m_listCtrlOnListItemActivated(wxListEvent& event);

public:
    Item m_item;
};

#endif // SEARCHDIALOG_H
