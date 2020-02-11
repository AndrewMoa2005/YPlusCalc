///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef GUI_H
#define GUI_H

// Define WX_GCH in order to support precompiled headers with GCC compiler.
// You have to create the header "wx_pch.h" and include all files needed
// for compile your gui inside it.
// Then, compile it and place the file "wx_pch.h.gch" into the same
// directory that "wx_pch.h".
#ifdef WX_GCH
#include <wx_pch.h>
#else
#include <wx/wx.h>
#endif

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/textctrl.h>
#include <wx/sizer.h>
#include <wx/choice.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/button.h>
#include <wx/statline.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class YpDialog
///////////////////////////////////////////////////////////////////////////////
class YpDialog : public wxDialog
{
private:

protected:
    wxStaticText* velText;
    wxTextCtrl* velCtrl;
    wxStaticText* denText;
    wxTextCtrl* denCtrl;
    wxStaticText* visText;
    wxTextCtrl* visCtrl;
    wxStaticText* lenText;
    wxTextCtrl* lenCtrl;
    wxChoice* inChoice;
    wxTextCtrl* inCtrl;
    wxButton* calButton;
    wxStaticLine* m_staticline1;
    wxChoice* outChoice;
    wxTextCtrl* outCtrl;
    wxStaticText* reText;
    wxTextCtrl* ReCtrl;

    // Virtual event handlers, overide them in your derived class
    virtual void OnClose( wxCloseEvent& event )
    {
        event.Skip();
    }
    virtual void OnChoiceIn( wxCommandEvent& event )
    {
        event.Skip();
    }
    virtual void OnCalc( wxCommandEvent& event )
    {
        event.Skip();
    }
    virtual void OnChoiceOut( wxCommandEvent& event )
    {
        event.Skip();
    }


public:

    YpDialog( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Y+ Calculator By AndrewMoa"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE );
    ~YpDialog();

};

#endif //GUI_H
