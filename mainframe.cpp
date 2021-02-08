#include "mainframe.h"
#include "gui.h"

MainFrame::MainFrame() :
		GUI::MainFrame(nullptr, wxID_ANY)
{
	m_grid->SetColLabelValue(0, _("Name"));
	m_grid->SetColLabelValue(1, _("Code"));
	m_grid->SetColLabelValue(2, _("Number"));
	m_grid->SetColLabelValue(3, _("Price"));
	m_grid->SetColLabelValue(4, _("Expiration"));

	m_grid->SetColumnWidth(0, 250);
	m_grid->SetColumnWidth(1, 250);
	m_grid->SetColumnWidth(2, 75);
	m_grid->SetColumnWidth(3, 75);
	m_grid->SetColumnWidth(4, 150);
}

void MainFrame::m_ribbonButton1OnRibbonButtonClicked(
		wxRibbonButtonBarEvent &event)
{
	GUI::SearchDialog searchDialog(this);
	searchDialog.ShowModal();
}

void MainFrame::m_ribbonButton2OnRibbonButtonClicked(
		wxRibbonButtonBarEvent &event)
{
	GUI::SearchDialog searchDialog(this);
	searchDialog.ShowModal();
}

void MainFrame::m_ribbonButton3OnRibbonButtonClicked(
		wxRibbonButtonBarEvent &event)
{
	GUI::SearchDialog searchDialog(this);
	searchDialog.ShowModal();
}

void MainFrame::m_ribbonButton4OnRibbonButtonClicked(
		wxRibbonButtonBarEvent &event)
{
	GUI::SearchDialog searchDialog(this);
	searchDialog.ShowModal();
}

void MainFrame::m_ribbonButton5OnRibbonButtonClicked(
		wxRibbonButtonBarEvent &event)
{
	GUI::SearchDialog searchDialog(this);
	searchDialog.ShowModal();
}

void MainFrame::m_ribbonButton6OnRibbonButtonClicked(
		wxRibbonButtonBarEvent &event)
{
	GUI::StatisticDialog statistic(this);
	statistic.ShowModal();
}

void MainFrame::m_ribbonButton7OnRibbonButtonClicked(
		wxRibbonButtonBarEvent &event)
{
	GUI::AboutDialog dialog(this);
	dialog.ShowModal();
}

void MainFrame::m_ribbonButton8OnRibbonButtonClicked(
		wxRibbonButtonBarEvent &event)
{
	GUI::HelpDialog dialog(this);
	dialog.m_richText->AppendText(wxT("Currently, there's no help."));
	dialog.ShowModal();
}
