// TDIMonDlg.h : header file
//

#if !defined(AFX_TDIMONDLG_H__1641F86B_25FC_4826_9CDD_F7994D608BBB__INCLUDED_)
#define AFX_TDIMONDLG_H__1641F86B_25FC_4826_9CDD_F7994D608BBB__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CTDIMonDlg dialog

class CTDIMonDlg : public CDialog
{
// Construction
public:
	CTDIMonDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CTDIMonDlg)
	enum { IDD = IDD_TDIMON_DIALOG };
	CListCtrl	m_LogList;
	BOOL	m_Check;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTDIMonDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CTDIMonDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnOk();
	afx_msg void OnRclickLog(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnClearlog();
	afx_msg void OnConnMon();
	afx_msg void OnClose();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TDIMONDLG_H__1641F86B_25FC_4826_9CDD_F7994D608BBB__INCLUDED_)
