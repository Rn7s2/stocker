#include "mainapp.h"
#include "mainframe.h"

wxIMPLEMENT_APP(MainApp);

bool MainApp::OnInit()
{
    m_locale.AddCatalogLookupPathPrefix(wxT("."));
    m_locale.AddCatalog(wxT("zh_CN"));
    m_locale.Init(wxLANGUAGE_CHINESE_SIMPLIFIED);

    MainFrame *frame = new MainFrame();
    frame->Show(true);
    return true;
}
