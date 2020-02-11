/***************************************************************
 * Name:      pmvppdMain.h
 * Purpose:   Defines Application Frame
 * Author:    陈瑞祥 (Andrew.Moa2005@163.om)
 * Created:   2019-12-10
 * Copyright: 陈瑞祥 ()
 * License:
 **************************************************************/

#ifndef YPDIALOG_H
#define YPDIALOG_H

#include "gui.h"

class mDialog: public YpDialog
{
public:
    mDialog(wxDialog *dlg);
    ~mDialog();
private:
    bool calcYp;
    virtual void OnClose( wxCloseEvent& event );
    virtual void OnChoiceIn( wxCommandEvent& event );
    virtual void OnCalc( wxCommandEvent& event );
    virtual void OnChoiceOut( wxCommandEvent& event );

    void calc();
    void swapCtrl();
};
#endif // YPDIALOG_H
