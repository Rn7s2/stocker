#ifndef MAINAPP_H
#define MAINAPP_H

#include <wx/wx.h>

class MainApp : public wxApp
{
public:
    virtual bool OnInit();

private:
    wxLocale m_locale;
};

#endif // MAINAPP_H
