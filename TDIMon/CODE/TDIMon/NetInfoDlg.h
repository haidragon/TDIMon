#if !defined(AFX_NETINFODLG_H__8BADAFB9_C7AD_41E8_8C69_8572BBC43A71__INCLUDED_)
#define AFX_NETINFODLG_H__8BADAFB9_C7AD_41E8_8C69_8572BBC43A71__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// NetInfoDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CNetInfoDlg dialog

class CNetInfoDlg : public CDialog
{
// Construction
public:
	CNetInfoDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CNetInfoDlg)
	enum { IDD = IDD_NETMON };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CNetInfoDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	// Generated message map functions
	//{{AFX_MSG(CNetInfoDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnAllow();
	afx_msg void OnDeny();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_NETINFODLG_H__8BADAFB9_C7AD_41E8_8C69_8572BBC43A71__INCLUDED_)
