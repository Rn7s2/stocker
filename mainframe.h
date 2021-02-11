#ifndef MAINFRAME_H
#define MAINFRAME_H

#include "gui.h"
#include "database.h"
#include <wx/msgdlg.h>

class MainFrame: public GUI::MainFrame {
public:
	MainFrame();

protected:
    void loadGrid();
    void updateRow(const Item& o, const Item& t);

	void m_ribbonButton1OnRibbonButtonClicked(wxRibbonButtonBarEvent &event) override;
	void m_ribbonButton2OnRibbonButtonClicked(wxRibbonButtonBarEvent &event) override;
	void m_ribbonButton3OnRibbonButtonClicked(wxRibbonButtonBarEvent &event) override;
	void m_ribbonButton4OnRibbonButtonClicked(wxRibbonButtonBarEvent &event) override;
	void m_ribbonButton5OnRibbonButtonClicked(wxRibbonButtonBarEvent &event) override;
	void m_ribbonButton6OnRibbonButtonClicked(wxRibbonButtonBarEvent &event) override;
	void m_ribbonButton7OnRibbonButtonClicked(wxRibbonButtonBarEvent &event) override;
    void m_ribbonButton8OnRibbonButtonClicked(wxRibbonButtonBarEvent &event) override;
};

#endif // MAINFRAME_H
