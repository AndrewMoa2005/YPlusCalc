/***************************************************************
 * Name:      pmvppdMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    陈瑞祥 (Andrew.Moa2005@163.om)
 * Created:   2019-12-10
 * Copyright: 陈瑞祥 ()
 * License:
 **************************************************************/

#ifdef WX_PRECOMP
#include "wx_pch.h"
#endif

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#include "ypdialog.h"
#include "yp.h"

mDialog::mDialog(wxDialog *dlg)
    : YpDialog(dlg)
{
    calcYp = false;
}

mDialog::~mDialog()
{
}

void mDialog::OnClose( wxCloseEvent& event )
{
    //event.Skip();
    Destroy();
}
void mDialog::OnChoiceIn( wxCommandEvent& event )
{
    calc();
    if(inChoice->GetSelection()>0)
    {
        outChoice->SetSelection(0);
        calcYp = true;
    }
    else
    {
        outChoice->SetSelection(1);
        calcYp = false;
    }
    swapCtrl();
    event.Skip();
}
void mDialog::OnChoiceOut( wxCommandEvent& event )
{
    calc();
    if(outChoice->GetSelection()>0)
    {
        inChoice->SetSelection(0);
        calcYp = false;
    }
    else
    {
        inChoice->SetSelection(1);
        calcYp = true;
    }
    swapCtrl();
    event.Skip();
}
void mDialog::OnCalc( wxCommandEvent& event )
{
    calc();
    event.Skip();
}
void mDialog::calc()
{
    double len, vel, vis, den, in;
    double out, re;
    if(!denCtrl->GetValue().ToDouble(&den))
        return;
    if(!velCtrl->GetValue().ToDouble(&vel))
        return;
    if(!visCtrl->GetValue().ToDouble(&vis))
        return;
    if(!lenCtrl->GetValue().ToDouble(&len))
        return;
    if(!inCtrl->GetValue().ToDouble(&in))
        return;
    re = reynolds_number(den, vel, len, vis);
    ReCtrl->SetValue(wxString::FromDouble(re));

    if(calcYp)
        out = y_plus(in, vis, den, vel, len);
    else
        out = wall_spacing(in, vis, den, vel, len);
    outCtrl->SetValue(wxString::FromDouble(out));
}
void mDialog::swapCtrl()
{
    if(inCtrl->IsEmpty())
    {
        if(outCtrl->IsEmpty())
            return;
        else
        {
            inCtrl->SetValue(outCtrl->GetValue());
            calc();
        }
    }
    else
    {
        if(outCtrl->IsEmpty())
            return;
        else
        {
            wxString str=inCtrl->GetValue();
            inCtrl->SetValue(outCtrl->GetValue());
            outCtrl->SetValue(str);
        }
    }
}
