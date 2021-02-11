//
// Created by rn7s2 on 2021/2/11.
//

#include "detaildialog.h"

extern Database db;

DetailDialog::DetailDialog(wxFrame *frame, const Item &t)
        : GUI::DetailDialog(frame)
{
    this->item = t;

    m_textCtrl1->SetValue(item.name);
    m_textCtrl2->SetValue(item.id);
    m_datePicker1->SetValue(item.expiration);
    m_spinCtrlDouble->SetValue(item.price);
    m_spinCtrl->SetValue(item.num);
}

void DetailDialog::m_datePicker2OnDateChanged(wxDateEvent &event)
{
    if (m_datePicker2->GetValue() > m_datePicker3->GetValue()) {
        auto tmp = m_datePicker2->GetValue();
        m_datePicker2->SetValue(m_datePicker3->GetValue());
        m_datePicker3->SetValue(tmp);
    }

    auto s = m_datePicker2->GetValue();
    auto t = m_datePicker3->GetValue();

    long in = 0, out = 0;

    for (auto it = item.record.begin(); it != item.record.end(); it++) {
        if (it->time < s || it->time > t)
            continue;

        if (it->cnt > 0)
            in += it->cnt;
        else
            out -= it->cnt;
    }

    wxString tmp;
    tmp << in;
    m_textCtrl3->SetValue(tmp);
    tmp.Clear();
    tmp << out;
    m_textCtrl4->SetValue(tmp);
}

void DetailDialog::m_datePicker3OnDateChanged(wxDateEvent &event)
{
    if (m_datePicker2->GetValue() > m_datePicker3->GetValue()) {
        auto tmp = m_datePicker2->GetValue();
        m_datePicker2->SetValue(m_datePicker3->GetValue());
        m_datePicker3->SetValue(tmp);
    }

    auto s = m_datePicker2->GetValue();
    auto t = m_datePicker3->GetValue();

    long in = 0, out = 0;

    for (auto it = item.record.begin(); it != item.record.end(); it++) {
        if (it->time < s || it->time > t)
            continue;

        if (it->cnt > 0)
            in += it->cnt;
        else
            out -= it->cnt;
    }

    wxString tmp;
    tmp << in;
    m_textCtrl3->SetValue(tmp);
    tmp.Clear();
    tmp << out;
    m_textCtrl4->SetValue(tmp);
}
