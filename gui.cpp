///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "gui.h"

///////////////////////////////////////////////////////////////////////////
using namespace GUI;

MainFrame::MainFrame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );

	m_ribbonBar1 = new wxRibbonBar( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxRIBBON_BAR_DEFAULT_STYLE );
	m_ribbonBar1->SetArtProvider(new wxRibbonDefaultArtProvider);
	m_ribbonPage1 = new wxRibbonPage( m_ribbonBar1, wxID_ANY, _("MyRibbonPage") , wxNullBitmap , 0 );
	m_ribbonPanel1 = new wxRibbonPanel( m_ribbonPage1, wxID_ANY, _("Function") , wxNullBitmap , wxDefaultPosition, wxDefaultSize, wxRIBBON_PANEL_DEFAULT_STYLE );
	m_ribbonButtonBar1 = new wxRibbonButtonBar( m_ribbonPanel1, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	m_ribbonButtonBar1->AddButton( wxID_ANY, _("Stock In"), wxArtProvider::GetBitmap( wxART_ADD_BOOKMARK, wxART_BUTTON ), wxEmptyString);
	m_ribbonButtonBar1->AddButton( wxID_ANY, _("Stock Out"), wxArtProvider::GetBitmap( wxART_DEL_BOOKMARK, wxART_BUTTON ), wxEmptyString);
	m_ribbonButtonBar1->AddButton( wxID_ANY, _("Detail"), wxArtProvider::GetBitmap( wxART_FIND, wxART_MENU ), wxEmptyString);
	m_ribbonButtonBar1->AddButton( wxID_ANY, _("Modify"), wxArtProvider::GetBitmap( wxART_FILE_SAVE_AS, wxART_BUTTON ), wxEmptyString);
	m_ribbonButtonBar1->AddButton( wxID_ANY, _("Delete"), wxArtProvider::GetBitmap( wxART_DELETE, wxART_BUTTON ), wxEmptyString);
	m_ribbonButtonBar1->AddButton( wxID_ANY, _("Record"), wxArtProvider::GetBitmap( wxART_REPORT_VIEW, wxART_BUTTON ), wxEmptyString);
	m_ribbonPanel2 = new wxRibbonPanel( m_ribbonPage1, wxID_ANY, _("Help") , wxNullBitmap , wxDefaultPosition, wxDefaultSize, wxRIBBON_PANEL_DEFAULT_STYLE );
	m_ribbonButtonBar2 = new wxRibbonButtonBar( m_ribbonPanel2, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	m_ribbonButtonBar2->AddButton( wxID_ANY, _("About"), wxArtProvider::GetBitmap( wxART_HELP_PAGE, wxART_BUTTON ), wxEmptyString);
	m_ribbonButtonBar2->AddButton( wxID_ANY, _("Help"), wxArtProvider::GetBitmap( wxART_HELP_BOOK, wxART_BUTTON ), wxEmptyString);
	m_ribbonBar1->Realize();

	bSizer1->Add( m_ribbonBar1, 0, wxEXPAND, 5 );

	m_grid = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );

	// Grid
	m_grid->CreateGrid( 5, 5 );
	m_grid->EnableEditing( true );
	m_grid->EnableGridLines( true );
	m_grid->EnableDragGridSize( false );
	m_grid->SetMargins( 0, 0 );

	// Columns
	m_grid->EnableDragColMove( false );
	m_grid->EnableDragColSize( true );
	m_grid->SetColLabelSize( 30 );
	m_grid->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
	m_grid->EnableDragRowSize( true );
	m_grid->SetRowLabelSize( 80 );
	m_grid->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance

	// Cell Defaults
	m_grid->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer1->Add( m_grid, 1, wxEXPAND, 5 );


	this->SetSizer( bSizer1 );
	this->Layout();

	this->Centre( wxBOTH );
}

MainFrame::~MainFrame()
{
}
