/***************************************************************
 * Name:      pmvppdApp.cpp
 * Purpose:   Code for Application Class
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

#include "app.h"
#include "ypdialog.h"

IMPLEMENT_APP(mApp);

bool mApp::OnInit()
{

    mDialog* dlg = new mDialog(NULL);
    dlg->SetIcon(wxICON(aaaa)); // To Set App Icon
    dlg->Show();
    return true;
}
