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
	this->SetSizeHints( wxSize( 1000,600 ), wxDefaultSize );

	wxBoxSizer* bSizer;
	bSizer = new wxBoxSizer( wxVERTICAL );

	m_ribbonBar = new wxRibbonBar( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxRIBBON_BAR_DEFAULT_STYLE );
	m_ribbonBar->SetArtProvider(new wxRibbonDefaultArtProvider);
	m_ribbonPage = new wxRibbonPage( m_ribbonBar, wxID_ANY, _("MyRibbonPage") , wxNullBitmap , 0 );
	m_ribbonPanel1 = new wxRibbonPanel( m_ribbonPage, wxID_ANY, _("Function") , wxNullBitmap , wxDefaultPosition, wxDefaultSize, wxRIBBON_PANEL_DEFAULT_STYLE );
	m_ribbonButtonBar1 = new wxRibbonButtonBar( m_ribbonPanel1, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	m_ribbonButtonBar1->AddButton( ID_RIBBON1, _("Stock In"), wxArtProvider::GetBitmap( wxART_ADD_BOOKMARK, wxART_BUTTON ), wxEmptyString);
	m_ribbonButtonBar1->AddButton( ID_RIBBON2, _("Stock Out"), wxArtProvider::GetBitmap( wxART_DEL_BOOKMARK, wxART_BUTTON ), wxEmptyString);
	m_ribbonButtonBar1->AddButton( ID_RIBBON3, _("Detail"), wxArtProvider::GetBitmap( wxART_FIND, wxART_MENU ), wxEmptyString);
	m_ribbonButtonBar1->AddButton( ID_RIBBON4, _("Modify"), wxArtProvider::GetBitmap( wxART_FILE_SAVE_AS, wxART_BUTTON ), wxEmptyString);
	m_ribbonButtonBar1->AddButton( ID_RIBBON5, _("Delete"), wxArtProvider::GetBitmap( wxART_DELETE, wxART_BUTTON ), wxEmptyString);
	m_ribbonButtonBar1->AddButton( ID_RIBBON6, _("Statistic"), wxArtProvider::GetBitmap( wxART_REPORT_VIEW, wxART_BUTTON ), wxEmptyString);
	m_ribbonPanel2 = new wxRibbonPanel( m_ribbonPage, wxID_ANY, _("Help") , wxNullBitmap , wxDefaultPosition, wxDefaultSize, wxRIBBON_PANEL_DEFAULT_STYLE );
	m_ribbonButtonBar2 = new wxRibbonButtonBar( m_ribbonPanel2, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	m_ribbonButtonBar2->AddButton( ID_RIBBON7, _("About"), wxArtProvider::GetBitmap( wxART_HELP_PAGE, wxART_BUTTON ), wxEmptyString);
	m_ribbonButtonBar2->AddButton( ID_RIBBON8, _("Help"), wxArtProvider::GetBitmap( wxART_HELP_BOOK, wxART_BUTTON ), wxEmptyString);
	m_ribbonBar->Realize();

	bSizer->Add( m_ribbonBar, 0, wxEXPAND, 5 );

	m_grid = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );

	// Grid
	m_grid->CreateGrid( 0, 5 );
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
	bSizer->Add( m_grid, 1, wxEXPAND, 5 );


	this->SetSizer( bSizer );
	this->Layout();
	bSizer->Fit( this );

	this->Centre( wxBOTH );

	// Connect Events
	this->Connect( ID_RIBBON1, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler( MainFrame::m_ribbonButton1OnRibbonButtonClicked ) );
	this->Connect( ID_RIBBON2, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler( MainFrame::m_ribbonButton2OnRibbonButtonClicked ) );
	this->Connect( ID_RIBBON3, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler( MainFrame::m_ribbonButton3OnRibbonButtonClicked ) );
	this->Connect( ID_RIBBON4, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler( MainFrame::m_ribbonButton4OnRibbonButtonClicked ) );
	this->Connect( ID_RIBBON5, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler( MainFrame::m_ribbonButton5OnRibbonButtonClicked ) );
	this->Connect( ID_RIBBON6, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler( MainFrame::m_ribbonButton6OnRibbonButtonClicked ) );
	this->Connect( ID_RIBBON7, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler( MainFrame::m_ribbonButton7OnRibbonButtonClicked ) );
	this->Connect( ID_RIBBON8, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler( MainFrame::m_ribbonButton8OnRibbonButtonClicked ) );
}

MainFrame::~MainFrame()
{
	// Disconnect Events
	this->Disconnect( ID_RIBBON1, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler( MainFrame::m_ribbonButton1OnRibbonButtonClicked ) );
	this->Disconnect( ID_RIBBON2, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler( MainFrame::m_ribbonButton2OnRibbonButtonClicked ) );
	this->Disconnect( ID_RIBBON3, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler( MainFrame::m_ribbonButton3OnRibbonButtonClicked ) );
	this->Disconnect( ID_RIBBON4, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler( MainFrame::m_ribbonButton4OnRibbonButtonClicked ) );
	this->Disconnect( ID_RIBBON5, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler( MainFrame::m_ribbonButton5OnRibbonButtonClicked ) );
	this->Disconnect( ID_RIBBON6, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler( MainFrame::m_ribbonButton6OnRibbonButtonClicked ) );
	this->Disconnect( ID_RIBBON7, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler( MainFrame::m_ribbonButton7OnRibbonButtonClicked ) );
	this->Disconnect( ID_RIBBON8, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler( MainFrame::m_ribbonButton8OnRibbonButtonClicked ) );

}

SearchDialog::SearchDialog( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText = new wxStaticText( this, wxID_ANY, _("Input name/code: "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText->Wrap( -1 );
	bSizer2->Add( m_staticText, 0, wxALL, 5 );

	m_textCtrl = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( m_textCtrl, 1, wxALL, 5 );


	bSizer1->Add( bSizer2, 0, wxEXPAND, 5 );

	m_listCtrl = new wxListCtrl( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_HRULES|wxLC_REPORT|wxLC_SINGLE_SEL );
	bSizer1->Add( m_listCtrl, 1, wxALL|wxEXPAND, 5 );

	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxHORIZONTAL );

	m_button1 = new wxButton( this, wxID_OK, _("OK"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer3->Add( m_button1, 0, wxALL, 5 );

	m_button2 = new wxButton( this, wxID_CANCEL, _("Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer3->Add( m_button2, 0, wxALL, 5 );


	bSizer1->Add( bSizer3, 0, wxALIGN_RIGHT, 5 );


	this->SetSizer( bSizer1 );
	this->Layout();
	bSizer1->Fit( this );

	this->Centre( wxBOTH );
}

SearchDialog::~SearchDialog()
{
}

AddExistedDialog::AddExistedDialog( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxGridSizer* gSizer;
	gSizer = new wxGridSizer( 2, 1, 0, 0 );

	wxBoxSizer* bSizer;
	bSizer = new wxBoxSizer( wxHORIZONTAL );

	m_staticText = new wxStaticText( this, wxID_ANY, _("Adding number: "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText->Wrap( -1 );
	bSizer->Add( m_staticText, 0, wxALL, 5 );


	bSizer->Add( 0, 0, 1, wxEXPAND, 5 );

	m_spinCtrl = new wxSpinCtrl( this, wxID_ANY, wxT("10"), wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 1, 1000000, 10 );
	bSizer->Add( m_spinCtrl, 0, wxALL, 5 );


	gSizer->Add( bSizer, 1, wxEXPAND, 5 );

	m_button = new wxButton( this, wxID_ANY, _("OK"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer->Add( m_button, 0, wxALL|wxALIGN_RIGHT, 5 );


	this->SetSizer( gSizer );
	this->Layout();
	gSizer->Fit( this );

	this->Centre( wxBOTH );
}

AddExistedDialog::~AddExistedDialog()
{
}

AddNewDialog::AddNewDialog( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxGridSizer* gSizer;
	gSizer = new wxGridSizer( 3, 2, 0, 0 );

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText1 = new wxStaticText( this, wxID_ANY, _("Name: "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1->Wrap( -1 );
	bSizer1->Add( m_staticText1, 0, wxALL, 5 );

	m_textCtrl1 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer1->Add( m_textCtrl1, 1, wxALL, 5 );


	gSizer->Add( bSizer1, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText2 = new wxStaticText( this, wxID_ANY, _("Code: "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2->Wrap( -1 );
	bSizer2->Add( m_staticText2, 0, wxALL, 5 );

	m_textCtrl2 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( m_textCtrl2, 1, wxALL, 5 );


	gSizer->Add( bSizer2, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText3 = new wxStaticText( this, wxID_ANY, _("Expiration: "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3->Wrap( -1 );
	bSizer3->Add( m_staticText3, 0, wxALL, 5 );

	m_datePicker = new wxDatePickerCtrl( this, wxID_ANY, wxDefaultDateTime, wxDefaultPosition, wxDefaultSize, wxDP_DEFAULT );
	bSizer3->Add( m_datePicker, 1, wxALL, 5 );


	gSizer->Add( bSizer3, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText4 = new wxStaticText( this, wxID_ANY, _("Price: "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4->Wrap( -1 );
	bSizer4->Add( m_staticText4, 0, wxALL, 5 );

	m_spinCtrlDouble = new wxSpinCtrlDouble( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 100, 0, 1 );
	m_spinCtrlDouble->SetDigits( 0 );
	bSizer4->Add( m_spinCtrlDouble, 1, wxALL, 5 );


	gSizer->Add( bSizer4, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText5 = new wxStaticText( this, wxID_ANY, _("Number: "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText5->Wrap( -1 );
	bSizer5->Add( m_staticText5, 0, wxALL, 5 );

	m_spinCtrl = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 10, 0 );
	bSizer5->Add( m_spinCtrl, 1, wxALL, 5 );


	gSizer->Add( bSizer5, 1, wxEXPAND, 5 );

	m_button = new wxButton( this, wxID_ANY, _("OK"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer->Add( m_button, 0, wxALL|wxALIGN_RIGHT|wxALIGN_BOTTOM, 5 );


	this->SetSizer( gSizer );
	this->Layout();
	gSizer->Fit( this );

	this->Centre( wxBOTH );
}

AddNewDialog::~AddNewDialog()
{
}

StockOutDialog::StockOutDialog( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxGridSizer* gSizer;
	gSizer = new wxGridSizer( 2, 1, 0, 0 );

	wxBoxSizer* bSizer;
	bSizer = new wxBoxSizer( wxHORIZONTAL );

	m_staticText = new wxStaticText( this, wxID_ANY, _("Stock out number: "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText->Wrap( -1 );
	bSizer->Add( m_staticText, 0, wxALL, 5 );


	bSizer->Add( 0, 0, 1, wxEXPAND, 5 );

	m_spinCtrl = new wxSpinCtrl( this, wxID_ANY, wxT("10"), wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 1, 1000000, 10 );
	bSizer->Add( m_spinCtrl, 0, wxALL, 5 );


	gSizer->Add( bSizer, 1, wxEXPAND, 5 );

	m_button = new wxButton( this, wxID_ANY, _("OK"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer->Add( m_button, 0, wxALL|wxALIGN_RIGHT, 5 );


	this->SetSizer( gSizer );
	this->Layout();
	gSizer->Fit( this );

	this->Centre( wxBOTH );
}

StockOutDialog::~StockOutDialog()
{
}

DetailDialog::DetailDialog( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );

	wxStaticBoxSizer* sbSizer1;
	sbSizer1 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Basic information") ), wxVERTICAL );

	wxGridSizer* gSizer1;
	gSizer1 = new wxGridSizer( 3, 2, 0, 0 );

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText1 = new wxStaticText( sbSizer1->GetStaticBox(), wxID_ANY, _("Name: "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1->Wrap( -1 );
	bSizer2->Add( m_staticText1, 0, wxALL, 5 );

	m_textCtrl1 = new wxTextCtrl( sbSizer1->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( m_textCtrl1, 1, wxALL, 5 );


	gSizer1->Add( bSizer2, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText2 = new wxStaticText( sbSizer1->GetStaticBox(), wxID_ANY, _("Code: "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2->Wrap( -1 );
	bSizer3->Add( m_staticText2, 0, wxALL, 5 );

	m_textCtrl2 = new wxTextCtrl( sbSizer1->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer3->Add( m_textCtrl2, 1, wxALL, 5 );


	gSizer1->Add( bSizer3, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText3 = new wxStaticText( sbSizer1->GetStaticBox(), wxID_ANY, _("Expiration: "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3->Wrap( -1 );
	bSizer4->Add( m_staticText3, 0, wxALL, 5 );

	m_datePicker = new wxDatePickerCtrl( sbSizer1->GetStaticBox(), wxID_ANY, wxDefaultDateTime, wxDefaultPosition, wxDefaultSize, wxDP_DEFAULT );
	bSizer4->Add( m_datePicker, 1, wxALL, 5 );


	gSizer1->Add( bSizer4, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText4 = new wxStaticText( sbSizer1->GetStaticBox(), wxID_ANY, _("Price: "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4->Wrap( -1 );
	bSizer5->Add( m_staticText4, 0, wxALL, 5 );

	m_spinCtrlDouble = new wxSpinCtrlDouble( sbSizer1->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 100, 0, 1 );
	m_spinCtrlDouble->SetDigits( 0 );
	bSizer5->Add( m_spinCtrlDouble, 1, wxALL, 5 );


	gSizer1->Add( bSizer5, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText5 = new wxStaticText( sbSizer1->GetStaticBox(), wxID_ANY, _("Number: "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText5->Wrap( -1 );
	bSizer6->Add( m_staticText5, 0, wxALL, 5 );

	m_spinCtrl = new wxSpinCtrl( sbSizer1->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 10, 0 );
	bSizer6->Add( m_spinCtrl, 1, wxALL, 5 );


	gSizer1->Add( bSizer6, 1, wxEXPAND, 5 );


	sbSizer1->Add( gSizer1, 1, wxEXPAND, 5 );


	bSizer1->Add( sbSizer1, 1, wxEXPAND, 5 );

	wxStaticBoxSizer* sbSizer2;
	sbSizer2 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Stock in/out record") ), wxVERTICAL );

	wxGridSizer* gSizer2;
	gSizer2 = new wxGridSizer( 3, 1, 0, 0 );

	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText6 = new wxStaticText( sbSizer2->GetStaticBox(), wxID_ANY, _("From"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText6->Wrap( -1 );
	bSizer7->Add( m_staticText6, 0, wxALL, 5 );

	m_datePicker6 = new wxDatePickerCtrl( sbSizer2->GetStaticBox(), wxID_ANY, wxDefaultDateTime, wxDefaultPosition, wxDefaultSize, wxDP_DEFAULT );
	bSizer7->Add( m_datePicker6, 1, wxALL, 5 );

	m_staticText7 = new wxStaticText( sbSizer2->GetStaticBox(), wxID_ANY, _("to"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText7->Wrap( -1 );
	bSizer7->Add( m_staticText7, 0, wxALL, 5 );

	m_datePicker7 = new wxDatePickerCtrl( sbSizer2->GetStaticBox(), wxID_ANY, wxDefaultDateTime, wxDefaultPosition, wxDefaultSize, wxDP_DEFAULT );
	bSizer7->Add( m_datePicker7, 1, wxALL, 5 );


	gSizer2->Add( bSizer7, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText8 = new wxStaticText( sbSizer2->GetStaticBox(), wxID_ANY, _("Total stock in: "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText8->Wrap( -1 );
	bSizer8->Add( m_staticText8, 0, wxALL, 5 );

	m_textCtrl3 = new wxTextCtrl( sbSizer2->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer8->Add( m_textCtrl3, 1, wxALL, 5 );


	gSizer2->Add( bSizer8, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText9 = new wxStaticText( sbSizer2->GetStaticBox(), wxID_ANY, _("Total stock out: "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText9->Wrap( -1 );
	bSizer9->Add( m_staticText9, 0, wxALL, 5 );

	m_textCtrl4 = new wxTextCtrl( sbSizer2->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( m_textCtrl4, 1, wxALL, 5 );


	gSizer2->Add( bSizer9, 1, wxEXPAND, 5 );


	sbSizer2->Add( gSizer2, 1, wxEXPAND, 5 );


	bSizer1->Add( sbSizer2, 1, wxEXPAND, 5 );

	m_button = new wxButton( this, wxID_ANY, _("OK"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer1->Add( m_button, 0, wxALL|wxALIGN_RIGHT|wxALIGN_BOTTOM, 5 );


	this->SetSizer( bSizer1 );
	this->Layout();
	bSizer1->Fit( this );

	this->Centre( wxBOTH );
}

DetailDialog::~DetailDialog()
{
}

ModifyDialog::ModifyDialog( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxGridSizer* gSizer;
	gSizer = new wxGridSizer( 3, 2, 0, 0 );

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText1 = new wxStaticText( this, wxID_ANY, _("Name: "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1->Wrap( -1 );
	bSizer1->Add( m_staticText1, 0, wxALL, 5 );

	m_textCtrl1 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer1->Add( m_textCtrl1, 1, wxALL, 5 );


	gSizer->Add( bSizer1, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText2 = new wxStaticText( this, wxID_ANY, _("Code: "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2->Wrap( -1 );
	bSizer2->Add( m_staticText2, 0, wxALL, 5 );

	m_textCtrl2 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( m_textCtrl2, 1, wxALL, 5 );


	gSizer->Add( bSizer2, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText3 = new wxStaticText( this, wxID_ANY, _("Expiration: "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3->Wrap( -1 );
	bSizer3->Add( m_staticText3, 0, wxALL, 5 );

	m_datePicker = new wxDatePickerCtrl( this, wxID_ANY, wxDefaultDateTime, wxDefaultPosition, wxDefaultSize, wxDP_DEFAULT );
	bSizer3->Add( m_datePicker, 1, wxALL, 5 );


	gSizer->Add( bSizer3, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText4 = new wxStaticText( this, wxID_ANY, _("Price: "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4->Wrap( -1 );
	bSizer4->Add( m_staticText4, 0, wxALL, 5 );

	m_spinCtrlDouble = new wxSpinCtrlDouble( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 100, 0, 1 );
	m_spinCtrlDouble->SetDigits( 0 );
	bSizer4->Add( m_spinCtrlDouble, 1, wxALL, 5 );


	gSizer->Add( bSizer4, 1, wxEXPAND, 5 );


	gSizer->Add( 0, 0, 1, wxEXPAND, 5 );

	m_button = new wxButton( this, wxID_ANY, _("OK"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer->Add( m_button, 0, wxALL|wxALIGN_RIGHT|wxALIGN_BOTTOM, 5 );


	this->SetSizer( gSizer );
	this->Layout();
	gSizer->Fit( this );

	this->Centre( wxBOTH );
}

ModifyDialog::~ModifyDialog()
{
}

DeleteDialog::DeleteDialog( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxHORIZONTAL );

	m_bitmap = new wxStaticBitmap( this, wxID_ANY, wxArtProvider::GetBitmap( wxART_WARNING, wxART_CMN_DIALOG ), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( m_bitmap, 0, wxALL|wxEXPAND, 5 );

	m_staticText = new wxStaticText( this, wxID_ANY, _("Are you sure?"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText->Wrap( -1 );
	bSizer2->Add( m_staticText, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer1->Add( bSizer2, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxHORIZONTAL );

	m_button1 = new wxButton( this, wxID_ANY, _("Yes"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer3->Add( m_button1, 0, wxALL, 5 );

	m_button2 = new wxButton( this, wxID_ANY, _("No"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer3->Add( m_button2, 0, wxALL, 5 );


	bSizer1->Add( bSizer3, 0, wxALIGN_RIGHT, 5 );


	this->SetSizer( bSizer1 );
	this->Layout();
	bSizer1->Fit( this );

	this->Centre( wxBOTH );
}

DeleteDialog::~DeleteDialog()
{
}

StatisticDialog::StatisticDialog( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer;
	bSizer = new wxBoxSizer( wxVERTICAL );

	m_staticText = new wxStaticText( this, wxID_ANY, _("I dont't know what function you want, or what statistic you need.\nSo it is not implemented."), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText->Wrap( -1 );
	bSizer->Add( m_staticText, 0, wxALL, 5 );


	this->SetSizer( bSizer );
	this->Layout();
	bSizer->Fit( this );

	this->Centre( wxBOTH );
}

StatisticDialog::~StatisticDialog()
{
}

AboutDialog::AboutDialog( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer;
	bSizer = new wxBoxSizer( wxVERTICAL );

	m_staticText1 = new wxStaticText( this, wxID_ANY, _("Stocker - Sales Management System"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1->Wrap( -1 );
	bSizer->Add( m_staticText1, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	m_staticText2 = new wxStaticText( this, wxID_ANY, _("Copyright (C) 2020 rn7s2"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2->Wrap( -1 );
	bSizer->Add( m_staticText2, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	m_button = new wxButton( this, wxID_OK, _("OK"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer->Add( m_button, 0, wxALL|wxALIGN_RIGHT, 5 );


	this->SetSizer( bSizer );
	this->Layout();
	bSizer->Fit( this );

	this->Centre( wxBOTH );
}

AboutDialog::~AboutDialog()
{
}

HelpDialog::HelpDialog( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 600,600 ), wxDefaultSize );

	wxBoxSizer* bSizer;
	bSizer = new wxBoxSizer( wxVERTICAL );

	m_richText = new wxRichTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0|wxVSCROLL|wxHSCROLL|wxNO_BORDER|wxWANTS_CHARS );
	bSizer->Add( m_richText, 1, wxEXPAND | wxALL, 5 );


	this->SetSizer( bSizer );
	this->Layout();
	bSizer->Fit( this );

	this->Centre( wxBOTH );
}

HelpDialog::~HelpDialog()
{
}
