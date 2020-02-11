///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "wx/wxprec.h"

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif //WX_PRECOMP

#include "gui.h"

///////////////////////////////////////////////////////////////////////////

YpDialog::YpDialog( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
    this->SetSizeHints( wxDefaultSize, wxDefaultSize );

    wxBoxSizer* vSizer;
    vSizer = new wxBoxSizer( wxVERTICAL );

    wxBoxSizer* hSizer;
    hSizer = new wxBoxSizer( wxHORIZONTAL );


    hSizer->Add( 0, 0, 1, wxEXPAND, 5 );

    velText = new wxStaticText( this, wxID_ANY, wxT("Freestream velocity (m/s)"), wxDefaultPosition, wxDefaultSize, 0 );
    velText->Wrap( -1 );
    hSizer->Add( velText, 0, wxALL, 5 );

    velCtrl = new wxTextCtrl( this, wxID_ANY, wxT("1.0"), wxDefaultPosition, wxDefaultSize, 0 );
    hSizer->Add( velCtrl, 0, wxALL, 5 );


    vSizer->Add( hSizer, 1, wxEXPAND, 5 );

    wxBoxSizer* hSizer1;
    hSizer1 = new wxBoxSizer( wxHORIZONTAL );


    hSizer1->Add( 0, 0, 1, wxEXPAND, 5 );

    denText = new wxStaticText( this, wxID_ANY, wxT("Freestream density (kg/m3)"), wxDefaultPosition, wxDefaultSize, 0 );
    denText->Wrap( -1 );
    hSizer1->Add( denText, 0, wxALL, 5 );

    denCtrl = new wxTextCtrl( this, wxID_ANY, wxT("1.225"), wxDefaultPosition, wxDefaultSize, 0 );
    hSizer1->Add( denCtrl, 0, wxALL, 5 );


    vSizer->Add( hSizer1, 1, wxEXPAND, 5 );

    wxBoxSizer* hSizer2;
    hSizer2 = new wxBoxSizer( wxHORIZONTAL );


    hSizer2->Add( 0, 0, 1, wxEXPAND, 5 );

    visText = new wxStaticText( this, wxID_ANY, wxT("Dynamic viscosity (kg/m-s)"), wxDefaultPosition, wxDefaultSize, 0 );
    visText->Wrap( -1 );
    hSizer2->Add( visText, 0, wxALL, 5 );

    visCtrl = new wxTextCtrl( this, wxID_ANY, wxT("0.000018375"), wxDefaultPosition, wxDefaultSize, 0 );
    hSizer2->Add( visCtrl, 0, wxALL, 5 );


    vSizer->Add( hSizer2, 1, wxEXPAND, 5 );

    wxBoxSizer* hSizer3;
    hSizer3 = new wxBoxSizer( wxHORIZONTAL );


    hSizer3->Add( 0, 0, 1, wxEXPAND, 5 );

    lenText = new wxStaticText( this, wxID_ANY, wxT("Reference length (m)"), wxDefaultPosition, wxDefaultSize, 0 );
    lenText->Wrap( -1 );
    hSizer3->Add( lenText, 0, wxALL, 5 );

    lenCtrl = new wxTextCtrl( this, wxID_ANY, wxT("1.0"), wxDefaultPosition, wxDefaultSize, 0 );
    hSizer3->Add( lenCtrl, 0, wxALL, 5 );


    vSizer->Add( hSizer3, 1, wxEXPAND, 5 );

    wxBoxSizer* hSizer4;
    hSizer4 = new wxBoxSizer( wxHORIZONTAL );


    hSizer4->Add( 0, 0, 1, wxEXPAND, 5 );

    wxString inChoiceChoices[] = { wxT("Desired Y+"), wxT("Wall spacing (m)") };
    int inChoiceNChoices = sizeof( inChoiceChoices ) / sizeof( wxString );
    inChoice = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, inChoiceNChoices, inChoiceChoices, 0 );
    inChoice->SetSelection( 0 );
    hSizer4->Add( inChoice, 0, wxALL, 5 );

    inCtrl = new wxTextCtrl( this, wxID_ANY, wxT("1.0"), wxDefaultPosition, wxDefaultSize, 0 );
    hSizer4->Add( inCtrl, 0, wxALL, 5 );


    vSizer->Add( hSizer4, 1, wxEXPAND, 5 );

    calButton = new wxButton( this, wxID_ANY, wxT("Calculate"), wxDefaultPosition, wxDefaultSize, 0 );
    vSizer->Add( calButton, 0, wxALL|wxEXPAND, 5 );

    m_staticline1 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
    vSizer->Add( m_staticline1, 0, wxEXPAND | wxALL, 5 );

    wxBoxSizer* hSizer5;
    hSizer5 = new wxBoxSizer( wxHORIZONTAL );


    hSizer5->Add( 0, 0, 1, wxEXPAND, 5 );

    wxString outChoiceChoices[] = { wxT("Wall Y+"), wxT("Wall spacing (m)") };
    int outChoiceNChoices = sizeof( outChoiceChoices ) / sizeof( wxString );
    outChoice = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, outChoiceNChoices, outChoiceChoices, 0 );
    outChoice->SetSelection( 1 );
    hSizer5->Add( outChoice, 0, wxALL, 5 );

    outCtrl = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
    hSizer5->Add( outCtrl, 0, wxALL, 5 );


    vSizer->Add( hSizer5, 1, wxEXPAND, 5 );

    wxBoxSizer* hSizer6;
    hSizer6 = new wxBoxSizer( wxHORIZONTAL );


    hSizer6->Add( 0, 0, 1, wxEXPAND, 5 );

    reText = new wxStaticText( this, wxID_ANY, wxT("Reynolds number"), wxDefaultPosition, wxDefaultSize, 0 );
    reText->Wrap( -1 );
    hSizer6->Add( reText, 0, wxALL, 5 );

    ReCtrl = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
    hSizer6->Add( ReCtrl, 0, wxALL, 5 );


    vSizer->Add( hSizer6, 1, wxEXPAND, 5 );


    this->SetSizer( vSizer );
    this->Layout();
    vSizer->Fit( this );

    this->Centre( wxBOTH );

    // Connect Events
    this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( YpDialog::OnClose ) );
    inChoice->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( YpDialog::OnChoiceIn ), NULL, this );
    calButton->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( YpDialog::OnCalc ), NULL, this );
    outChoice->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( YpDialog::OnChoiceOut ), NULL, this );
}

YpDialog::~YpDialog()
{
    // Disconnect Events
    this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( YpDialog::OnClose ) );
    inChoice->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( YpDialog::OnChoiceIn ), NULL, this );
    calButton->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( YpDialog::OnCalc ), NULL, this );
    outChoice->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( YpDialog::OnChoiceOut ), NULL, this );

}
