///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/intl.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/ribbon/buttonbar.h>
#include <wx/ribbon/panel.h>
#include <wx/ribbon/page.h>
#include <wx/ribbon/control.h>
#include <wx/ribbon/art.h>
#include <wx/ribbon/bar.h>
#include <wx/grid.h>
#include <wx/sizer.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////

namespace GUI
{
	///////////////////////////////////////////////////////////////////////////////
	/// Class MainFrame
	///////////////////////////////////////////////////////////////////////////////
	class MainFrame : public wxFrame
	{
		private:

		protected:
			wxRibbonBar* m_ribbonBar1;
			wxRibbonPage* m_ribbonPage1;
			wxRibbonPanel* m_ribbonPanel1;
			wxRibbonButtonBar* m_ribbonButtonBar1;
			wxRibbonPanel* m_ribbonPanel2;
			wxRibbonButtonBar* m_ribbonButtonBar2;
			wxGrid* m_grid;

		public:

			MainFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Stocker - Sales Management System"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 1000,600 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

			~MainFrame();

	};

} // namespace GUI

