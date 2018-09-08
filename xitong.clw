; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CXitongDlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "xitong.h"

ClassCount=12
Class1=CXitongApp
Class2=CXitongDlg
Class3=CAboutDlg

ResourceCount=9
Resource1=IDD_DIALOG1
Resource2=IDR_MAINFRAME
Resource3=IDD_ABOUTBOX
Class4=jiemian
Class5=setbmp
Class6=CCustomToolBar
Resource4=IDD_DIALOG6
Resource5=IDD_DIALOG2
Resource6=IDD_DIALOG5
Resource7=IDD_DIALOG3
Resource8=IDD_XITONG_DIALOG
Class7=Cxinxi
Class8=Ckecheng
Class9=Cchengji
Class10=Cjiankang
Class11=Chuodong
Class12=Cdb003dlg
Resource9=IDD_DB003_DIALOG

[CLS:CXitongApp]
Type=0
HeaderFile=xitong.h
ImplementationFile=xitong.cpp
Filter=N
LastObject=CXitongApp

[CLS:CXitongDlg]
Type=0
HeaderFile=xitongDlg.h
ImplementationFile=xitongDlg.cpp
Filter=D
LastObject=IDC_BUTTON2
BaseClass=CDialog
VirtualFilter=dWC

[CLS:CAboutDlg]
Type=0
HeaderFile=xitongDlg.h
ImplementationFile=xitongDlg.cpp
Filter=D
LastObject=CAboutDlg

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_XITONG_DIALOG]
Type=1
Class=CXitongDlg
ControlCount=7
Control1=IDC_EDIT1,edit,1342374016
Control2=IDC_EDIT2,edit,1342242944
Control3=IDC_EDIT3,edit,1342242976
Control4=IDC_STATIC,static,1342177287
Control5=IDC_STATIC,static,1342177294
Control6=IDC_BUTTON1,button,1342242816
Control7=IDC_BUTTON2,button,1342242816

[DLG:IDD_DIALOG1]
Type=1
Class=jiemian
ControlCount=2
Control1=IDCANCEL,button,1342242816
Control2=IDC_TAB1,SysTabControl32,1342177280

[CLS:jiemian]
Type=0
HeaderFile=jiemian.h
ImplementationFile=jiemian.cpp
BaseClass=CDialog
Filter=D
LastObject=jiemian
VirtualFilter=dWC

[CLS:setbmp]
Type=0
HeaderFile=setbmp.h
ImplementationFile=setbmp.cpp
BaseClass=CButton
Filter=W

[CLS:CCustomToolBar]
Type=0
HeaderFile=CustomToolBar.h
ImplementationFile=CustomToolBar.cpp
BaseClass=CToolBarCtrl
Filter=W
LastObject=CCustomToolBar
VirtualFilter=YWC

[DLG:IDD_DIALOG2]
Type=1
Class=Cxinxi
ControlCount=19
Control1=IDC_EDIT1,edit,1350631552
Control2=IDC_EDIT2,edit,1350631552
Control3=IDC_BUTTON2,button,1342242816
Control4=IDC_STATIC,button,1342177287
Control5=IDC_STATIC,button,1342177287
Control6=IDC_LIST1,SysListView32,1350631425
Control7=IDC_STATIC,static,1342308352
Control8=IDC_EDIT3,edit,1350631552
Control9=IDC_STATIC,static,1342308352
Control10=IDC_EDIT4,edit,1350631552
Control11=IDC_STATIC,static,1342308352
Control12=IDC_STATIC,static,1342308352
Control13=IDC_EDIT5,edit,1350631552
Control14=IDC_STATIC,static,1342308352
Control15=IDC_EDIT6,edit,1350631552
Control16=IDC_STATIC,static,1342308352
Control17=IDC_BUTTON6,button,1342242816
Control18=IDC_STATIC,button,1342177287
Control19=IDC_BUTTON7,button,1342242816

[DLG:IDD_DIALOG3]
Type=1
Class=Ckecheng
ControlCount=8
Control1=IDC_COMBO1,combobox,1344339970
Control2=IDC_BUTTON1,button,1342242816
Control3=IDC_LIST2,listbox,1352728833
Control4=IDC_STATIC,button,1342177287
Control5=IDC_STATIC,button,1342177287
Control6=IDC_EDIT1,edit,1350631552
Control7=IDC_STATIC,static,1342308352
Control8=IDC_BUTTON2,button,1342242816

[DLG:IDD_DIALOG5]
Type=1
Class=Cjiankang
ControlCount=16
Control1=IDC_STATIC,button,1342177287
Control2=IDC_LIST1,SysListView32,1350631425
Control3=IDC_BUTTON1,button,1342242816
Control4=IDC_EDIT1,edit,1350631552
Control5=IDC_EDIT2,edit,1350631552
Control6=IDC_EDIT3,edit,1350631552
Control7=IDC_STATIC,button,1342177287
Control8=IDC_STATIC,static,1342308352
Control9=IDC_STATIC,static,1342308352
Control10=IDC_STATIC,static,1342308352
Control11=IDC_BUTTON2,button,1342242816
Control12=IDC_EDIT5,edit,1350631552
Control13=IDC_EDIT6,edit,1350631552
Control14=IDC_STATIC,static,1342308352
Control15=IDC_STATIC,static,1342308352
Control16=IDC_BUTTON6,button,1342242816

[DLG:IDD_DIALOG6]
Type=1
Class=Chuodong
ControlCount=14
Control1=IDC_STATIC,button,1342177287
Control2=IDC_LIST2,SysListView32,1350631425
Control3=IDC_STATIC,button,1342177287
Control4=IDC_EDIT1,edit,1350631552
Control5=IDC_EDIT2,edit,1350631552
Control6=IDC_EDIT3,edit,1350631552
Control7=IDC_EDIT4,edit,1350631552
Control8=IDC_STATIC,static,1342308352
Control9=IDC_STATIC,static,1342308352
Control10=IDC_STATIC,static,1342308352
Control11=IDC_STATIC,static,1342308352
Control12=IDC_BUTTON2,button,1342242816
Control13=IDC_BUTTON4,button,1342242816
Control14=IDC_BUTTON5,button,1342242816

[CLS:Cxinxi]
Type=0
HeaderFile=xinxi.h
ImplementationFile=xinxi.cpp
BaseClass=CDialog
Filter=D
LastObject=IDC_EDIT1
VirtualFilter=dWC

[CLS:Ckecheng]
Type=0
HeaderFile=kecheng.h
ImplementationFile=kecheng.cpp
BaseClass=CDialog
Filter=D
LastObject=IDC_EDIT1
VirtualFilter=dWC

[CLS:Cchengji]
Type=0
HeaderFile=chengji.h
ImplementationFile=chengji.cpp
BaseClass=CDialog
Filter=D
LastObject=IDC_LIST1
VirtualFilter=dWC

[CLS:Cjiankang]
Type=0
HeaderFile=jiankang.h
ImplementationFile=jiankang.cpp
BaseClass=CDialog
Filter=D
LastObject=IDC_LIST1
VirtualFilter=dWC

[CLS:Chuodong]
Type=0
HeaderFile=huodong.h
ImplementationFile=huodong.cpp
BaseClass=CDialog
Filter=D
LastObject=IDC_LIST2
VirtualFilter=dWC

[DLG:IDD_DB003_DIALOG]
Type=1
Class=Cdb003dlg
ControlCount=21
Control1=IDC_EDIT_ID,edit,1350631552
Control2=IDC_EDIT_NAME,edit,1350631552
Control3=IDC_BUTTON_INSERT,button,1342242816
Control4=IDC_EDIT_SCORE,edit,1350631552
Control5=IDC_STATIC,static,1342308352
Control6=IDC_STATIC,static,1342308352
Control7=IDC_STATIC,static,1342308352
Control8=IDC_STATIC,button,1342177287
Control9=IDC_BUTTON_SAVE,button,1342242816
Control10=IDC_BUTTON_CANCEL,button,1342242816
Control11=IDC_STATIC,button,1342177287
Control12=IDC_LIST_STUDENT,SysListView32,1350631425
Control13=IDC_BUTTON_MOD,button,1342242816
Control14=IDC_BUTTON_DEL,button,1342242816
Control15=IDC_COMBO_METHOD,combobox,1344340226
Control16=IDC_BUTTON_SORT,button,1342242816
Control17=IDC_STATIC,static,1342308352
Control18=IDC_STATIC,static,1342308352
Control19=IDC_COMBO_COLUMN,combobox,1344340226
Control20=IDC_STATIC,button,1342177287
Control21=IDC_STATIC,button,1342177287

[CLS:Cdb003dlg]
Type=0
HeaderFile=db003dlg1.h
ImplementationFile=db003dlg1.cpp
BaseClass=CDialog
Filter=D
LastObject=IDC_EDIT_ID
VirtualFilter=dWC

