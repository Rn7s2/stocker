#ifndef MAINFRAME_H
#define MAINFRAME_H

#include "gui.h"

class MainFrame : public GUI::MainFrame
{
public:
    MainFrame();

protected:
    void m_ribbonButton1OnRibbonButtonClicked(wxRibbonButtonBarEvent& event);
    void m_ribbonButton2OnRibbonButtonClicked(wxRibbonButtonBarEvent& event);
    void m_ribbonButton3OnRibbonButtonClicked(wxRibbonButtonBarEvent& event);
    void m_ribbonButton4OnRibbonButtonClicked(wxRibbonButtonBarEvent& event);
    void m_ribbonButton5OnRibbonButtonClicked(wxRibbonButtonBarEvent& event);
    void m_ribbonButton6OnRibbonButtonClicked(wxRibbonButtonBarEvent& event);
    void m_ribbonButton7OnRibbonButtonClicked(wxRibbonButtonBarEvent& event);
    void m_ribbonButton8OnRibbonButtonClicked(wxRibbonButtonBarEvent& event);
};

#endif // MAINFRAME_H
