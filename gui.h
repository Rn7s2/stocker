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
#include <wx/panel.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/stattext.h>
#include <wx/richtext/richtextctrl.h>
#include <wx/sizer.h>
#include <wx/notebook.h>
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
			wxNotebook* m_notebook;
			wxPanel* m_panelStockIn;
			wxPanel* m_panelStockOut;
			wxPanel* m_panelDetail;
			wxPanel* m_panelModify;
			wxPanel* m_panelDelete;
			wxPanel* m_panelOverview;
			wxPanel* m_panelRecord;
			wxPanel* m_panelAbout;
			wxStaticText* m_staticText1;
			wxRichTextCtrl* m_richText1;

		public:

			MainFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Stocker - Sales Management System"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 1000,600 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

			~MainFrame();

	};

} // namespace GUI

