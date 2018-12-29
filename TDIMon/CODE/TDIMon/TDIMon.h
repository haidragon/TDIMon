// TDIMon.h : main header file for the TDIMON application
//

#if !defined(AFX_TDIMON_H__03107C94_5A29_4982_9CB1_98904FA89864__INCLUDED_)
#define AFX_TDIMON_H__03107C94_5A29_4982_9CB1_98904FA89864__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CTDIMonApp:
// See TDIMon.cpp for the implementation of this class
//

class CTDIMonApp : public CWinApp
{
public:
	CTDIMonApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTDIMonApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CTDIMonApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TDIMON_H__03107C94_5A29_4982_9CB1_98904FA89864__INCLUDED_)
