#include "addexisteddialog.h"

AddExistedDialog::AddExistedDialog(wxFrame *frame)
        : GUI::AddExistedDialog(frame)
{}


bool AddExistedDialog::TransferDataFromWindow()
{
    num = m_spinCtrl->GetValue();
    return true;
}
