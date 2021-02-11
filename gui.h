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
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/listctrl.h>
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/spinctrl.h>
#include <wx/datectrl.h>
#include <wx/dateevt.h>
#include <wx/statbox.h>
#include <wx/statbmp.h>

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
			enum
			{
				ID_RIBBON1 = 1000,
				ID_RIBBON9,
				ID_RIBBON2,
				ID_RIBBON3,
				ID_RIBBON4,
				ID_RIBBON5,
				ID_RIBBON6,
				ID_RIBBON7
			};

			wxRibbonBar* m_ribbonBar;
			wxRibbonPage* m_ribbonPage;
			wxRibbonPanel* m_ribbonPanel1;
			wxRibbonButtonBar* m_ribbonButtonBar1;
			wxRibbonPanel* m_ribbonPanel2;
			wxRibbonButtonBar* m_ribbonButtonBar2;
			wxGrid* m_grid;

			// Virtual event handlers, overide them in your derived class
			virtual void m_ribbonButton1OnRibbonButtonClicked( wxRibbonButtonBarEvent& event ) { event.Skip(); }
			virtual void m_ribbonButton2OnRibbonButtonClicked( wxRibbonButtonBarEvent& event ) { event.Skip(); }
			virtual void m_ribbonButton3OnRibbonButtonClicked( wxRibbonButtonBarEvent& event ) { event.Skip(); }
			virtual void m_ribbonButton4OnRibbonButtonClicked( wxRibbonButtonBarEvent& event ) { event.Skip(); }
			virtual void m_ribbonButton5OnRibbonButtonClicked( wxRibbonButtonBarEvent& event ) { event.Skip(); }
			virtual void m_ribbonButton6OnRibbonButtonClicked( wxRibbonButtonBarEvent& event ) { event.Skip(); }
			virtual void m_ribbonButton7OnRibbonButtonClicked( wxRibbonButtonBarEvent& event ) { event.Skip(); }
			virtual void m_ribbonButton8OnRibbonButtonClicked( wxRibbonButtonBarEvent& event ) { event.Skip(); }


		public:

			MainFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Stocker - Sales Management System"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

			~MainFrame();

	};

	///////////////////////////////////////////////////////////////////////////////
	/// Class SearchDialog
	///////////////////////////////////////////////////////////////////////////////
	class SearchDialog : public wxDialog
	{
		private:

		protected:
			wxStaticText* m_staticText;
			wxTextCtrl* m_textCtrl;
			wxListCtrl* m_listCtrl;
			wxButton* m_button;

			// Virtual event handlers, overide them in your derived class
			virtual void m_textCtrlOnText( wxCommandEvent& event ) { event.Skip(); }
			virtual void m_listCtrlOnListItemActivated( wxListEvent& event ) { event.Skip(); }
			virtual void m_listCtrlOnListItemSelected( wxListEvent& event ) { event.Skip(); }


		public:

			SearchDialog( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Search"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 900,500 ), long style = wxDEFAULT_DIALOG_STYLE );
			~SearchDialog();

	};

	///////////////////////////////////////////////////////////////////////////////
	/// Class AddExistedDialog
	///////////////////////////////////////////////////////////////////////////////
	class AddExistedDialog : public wxDialog
	{
		private:

		protected:
			wxStaticText* m_staticText;
			wxSpinCtrl* m_spinCtrl;
			wxButton* m_button1;
			wxButton* m_button2;

		public:

			AddExistedDialog( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Stock in"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = 0 );
			~AddExistedDialog();

	};

	///////////////////////////////////////////////////////////////////////////////
	/// Class AddNewDialog
	///////////////////////////////////////////////////////////////////////////////
	class AddNewDialog : public wxDialog
	{
		private:

		protected:
			wxStaticText* m_staticText1;
			wxTextCtrl* m_textCtrl1;
			wxStaticText* m_staticText2;
			wxTextCtrl* m_textCtrl2;
			wxStaticText* m_staticText3;
			wxDatePickerCtrl* m_datePicker;
			wxStaticText* m_staticText4;
			wxSpinCtrlDouble* m_spinCtrlDouble;
			wxStaticText* m_staticText5;
			wxSpinCtrl* m_spinCtrl;
			wxButton* m_button1;
			wxButton* m_button2;

			// Virtual event handlers, overide them in your derived class
			virtual void m_textCtrl1OnChar( wxKeyEvent& event ) { event.Skip(); }
			virtual void m_textCtrl1OnText( wxCommandEvent& event ) { event.Skip(); }
			virtual void m_textCtrl2OnChar( wxKeyEvent& event ) { event.Skip(); }
			virtual void m_textCtrl2OnText( wxCommandEvent& event ) { event.Skip(); }


		public:

			AddNewDialog( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Stock in"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = 0 );
			~AddNewDialog();

	};

	///////////////////////////////////////////////////////////////////////////////
	/// Class StockOutDialog
	///////////////////////////////////////////////////////////////////////////////
	class StockOutDialog : public wxDialog
	{
		private:

		protected:
			wxStaticText* m_staticText;
			wxSpinCtrl* m_spinCtrl;
			wxButton* m_button1;
			wxButton* m_button2;

		public:

			StockOutDialog( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Stock out"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = 0 );
			~StockOutDialog();

	};

	///////////////////////////////////////////////////////////////////////////////
	/// Class DetailDialog
	///////////////////////////////////////////////////////////////////////////////
	class DetailDialog : public wxDialog
	{
		private:

		protected:
			wxStaticText* m_staticText1;
			wxTextCtrl* m_textCtrl1;
			wxStaticText* m_staticText2;
			wxTextCtrl* m_textCtrl2;
			wxStaticText* m_staticText3;
			wxDatePickerCtrl* m_datePicker1;
			wxStaticText* m_staticText4;
			wxSpinCtrlDouble* m_spinCtrlDouble;
			wxStaticText* m_staticText5;
			wxSpinCtrl* m_spinCtrl;
			wxStaticText* m_staticText6;
			wxDatePickerCtrl* m_datePicker2;
			wxStaticText* m_staticText7;
			wxDatePickerCtrl* m_datePicker3;
			wxStaticText* m_staticText8;
			wxTextCtrl* m_textCtrl3;
			wxStaticText* m_staticText9;
			wxTextCtrl* m_textCtrl4;
			wxButton* m_button;

			// Virtual event handlers, overide them in your derived class
			virtual void m_datePicker2OnDateChanged( wxDateEvent& event ) { event.Skip(); }
			virtual void m_datePicker3OnDateChanged( wxDateEvent& event ) { event.Skip(); }


		public:

			DetailDialog( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Detail"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE );
			~DetailDialog();

	};

	///////////////////////////////////////////////////////////////////////////////
	/// Class ModifyDialog
	///////////////////////////////////////////////////////////////////////////////
	class ModifyDialog : public wxDialog
	{
		private:

		protected:
			wxStaticText* m_staticText1;
			wxTextCtrl* m_textCtrl1;
			wxStaticText* m_staticText2;
			wxTextCtrl* m_textCtrl2;
			wxStaticText* m_staticText3;
			wxDatePickerCtrl* m_datePicker;
			wxStaticText* m_staticText4;
			wxSpinCtrlDouble* m_spinCtrlDouble;
			wxButton* m_button1;
			wxButton* m_button2;

		public:

			ModifyDialog( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Modify"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = 0 );
			~ModifyDialog();

	};

	///////////////////////////////////////////////////////////////////////////////
	/// Class DeleteDialog
	///////////////////////////////////////////////////////////////////////////////
	class DeleteDialog : public wxDialog
	{
		private:

		protected:
			wxStaticBitmap* m_bitmap;
			wxStaticText* m_staticText;
			wxButton* m_button1;
			wxButton* m_button2;

		public:

			DeleteDialog( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Delete"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxDEFAULT_DIALOG_STYLE );
			~DeleteDialog();

	};

	///////////////////////////////////////////////////////////////////////////////
	/// Class StatisticDialog
	///////////////////////////////////////////////////////////////////////////////
	class StatisticDialog : public wxDialog
	{
		private:

		protected:
			wxStaticText* m_staticText;

		public:

			StatisticDialog( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Statistic"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE );
			~StatisticDialog();

	};

	///////////////////////////////////////////////////////////////////////////////
	/// Class AboutDialog
	///////////////////////////////////////////////////////////////////////////////
	class AboutDialog : public wxDialog
	{
		private:

		protected:
			wxStaticText* m_staticText1;
			wxStaticText* m_staticText2;
			wxButton* m_button;

		public:

			AboutDialog( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("About"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE );
			~AboutDialog();

	};

} // namespace GUI

