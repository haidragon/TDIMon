; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CNetInfoDlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "TDIMon.h"

ClassCount=4
Class1=CTDIMonApp
Class2=CTDIMonDlg
Class3=CAboutDlg

ResourceCount=5
Resource1=IDD_ABOUTBOX
Resource2=IDR_MAINFRAME
Resource3=IDD_NETMON
Resource4=IDR_LOG
Class4=CNetInfoDlg
Resource5=IDD_TDIMON_DIALOG

[CLS:CTDIMonApp]
Type=0
HeaderFile=TDIMon.h
ImplementationFile=TDIMon.cpp
Filter=N

[CLS:CTDIMonDlg]
Type=0
HeaderFile=TDIMonDlg.h
ImplementationFile=TDIMonDlg.cpp
Filter=D
BaseClass=CDialog
VirtualFilter=dWC
LastObject=CTDIMonDlg

[CLS:CAboutDlg]
Type=0
HeaderFile=TDIMonDlg.h
ImplementationFile=TDIMonDlg.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_TDIMON_DIALOG]
Type=1
Class=CTDIMonDlg
ControlCount=12
Control1=IDC_STATIC,button,1342177287
Control2=IDC_LOG,SysListView32,1350631425
Control3=IDC_STATIC,button,1342177287
Control4=IDC_STATIC,button,1342177287
Control5=IDC_STATIC,static,1342308352
Control6=IDC_STATIC,static,1342308352
Control7=IDC_PID,edit,1350639760
Control8=IDC_PORT,edit,1350639760
Control9=IDC_OK,button,1342275584
Control10=IDC_STATIC,static,1342308352
Control11=IDC_COUNT,static,1342308620
Control12=IDC_CONN_MON,button,1342242819

[MNU:IDR_LOG]
Type=1
Class=CTDIMonDlg
Command1=IDM_CLEARLOG
CommandCount=1

[DLG:IDD_NETMON]
Type=1
Class=CNetInfoDlg
ControlCount=2
Control1=IDC_ALLOW,button,1342242816
Control2=IDC_DENY,button,1342242816

[CLS:CNetInfoDlg]
Type=0
HeaderFile=NetInfoDlg.h
ImplementationFile=NetInfoDlg.cpp
BaseClass=CDialog
Filter=D
LastObject=CNetInfoDlg
VirtualFilter=dWC

