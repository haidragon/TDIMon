// NetInfoDlg.cpp : implementation file
//

#include "stdafx.h"
#include "TDIMon.h"
#include "NetInfoDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CNetInfoDlg dialog


CNetInfoDlg::CNetInfoDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CNetInfoDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CNetInfoDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CNetInfoDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CNetInfoDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CNetInfoDlg, CDialog)
	//{{AFX_MSG_MAP(CNetInfoDlg)
	ON_BN_CLICKED(IDC_ALLOW, OnAllow)
	ON_BN_CLICKED(IDC_DENY, OnDeny)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CNetInfoDlg message handlers
BOOL CNetInfoDlg::OnInitDialog()
{
	CDialog::OnInitDialog();
	
	//是对话框窗口总在最前
	SetWindowPos(&CWnd::wndTopMost,0,0,0,0,SWP_NOMOVE|SWP_NOSIZE); 
	
	return TRUE; 
}

void CNetInfoDlg::OnAllow() 
{
	// TODO: Add your control notification handler code here
	MessageBox("允许!");
}

void CNetInfoDlg::OnDeny() 
{
	// TODO: Add your control notification handler code here
	MessageBox("阻止");
}

