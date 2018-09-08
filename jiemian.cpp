// jiemian.cpp : implementation file
//

#include "stdafx.h"
#include "xitong.h"
#include "jiemian.h"
#include "xinxi.h"
#include "kecheng.h"
#include "chengji.h"
#include "jiankang.h"
#include "huodong.h"
#include "db003dlg1.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// jiemian dialog


jiemian::jiemian(CWnd* pParent /*=NULL*/)
	: CDialog(jiemian::IDD, pParent)
{
	//{{AFX_DATA_INIT(jiemian)
	//}}AFX_DATA_INIT
}


void jiemian::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(jiemian)
	DDX_Control(pDX, IDC_TAB1, m_Tab);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(jiemian, CDialog)
	//{{AFX_MSG_MAP(jiemian)
	ON_NOTIFY(TCN_SELCHANGE, IDC_TAB1, OnSelchangeTab1)
	ON_WM_CLOSE()
	//}}AFX_MSG_MAP

END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// jiemian message handlers




BOOL jiemian::OnInitDialog() 
{   
	CDialog::OnInitDialog();
	m_ImageList.Create(24,24,ILC_COLOR24|ILC_MASK,1,1);
	m_ImageList.Add(AfxGetApp()->LoadIcon(IDI_ICON1));//载入图标
	m_ImageList.Add(AfxGetApp()->LoadIcon(IDI_ICON2));
	m_ImageList.Add(AfxGetApp()->LoadIcon(IDI_ICON3));
	m_ImageList.Add(AfxGetApp()->LoadIcon(IDI_ICON4));
	m_ImageList.Add(AfxGetApp()->LoadIcon(IDI_ICON5));
    m_Tab.SetImageList(&m_ImageList);//关联图片列表对象和标签栏
	m_Tab.InsertItem(0,"学生信息",0);//设置标签栏
	m_Tab.InsertItem(1,"课程管理",1);
	m_Tab.InsertItem(2,"成绩管理",2);
	m_Tab.InsertItem(3,"健康管理",3);
	m_Tab.InsertItem(4,"活动管理",4);
	m_xinxi = new Cxinxi;//标签栏显示的对话框类
	m_kecheng = new Ckecheng;
	m_chengji = new Cdb003dlg;
	m_jiankang = new Cjiankang;
	m_huodong = new Chuodong;
	m_xinxi->Create(IDD_DIALOG2,&m_Tab);
	m_kecheng->Create(IDD_DIALOG3,&m_Tab);
	m_chengji->Create(IDD_DB003_DIALOG,&m_Tab);
    m_jiankang->Create(IDD_DIALOG5,&m_Tab);
	m_huodong->Create(IDD_DIALOG6,&m_Tab);
    m_chengji->ShowWindow(SW_HIDE);//调试过程中发现成绩对话框自动弹出，因此修改此处，实现隐藏
	m_xinxi->CenterWindow();//将信息对话框放置中间初始化
	m_xinxi->ShowWindow(SW_SHOW);
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}



void jiemian::OnSelchangeTab1(NMHDR* pNMHDR, LRESULT* pResult) 
{
	// TODO: Add your control notification handler code here
	int index = m_Tab.GetCurSel();//选择标签栏的功能号
	switch(index)
	{
	case 0: //弹出信息框隐藏其他
		m_xinxi->CenterWindow();
		m_xinxi->ShowWindow(SW_SHOW);
		m_kecheng->ShowWindow(SW_HIDE);
		m_chengji->ShowWindow(SW_HIDE);
        m_jiankang->ShowWindow(SW_HIDE);
		m_huodong->ShowWindow(SW_HIDE);
		break;
	case 1: //弹出课程框隐藏其他
		m_kecheng->CenterWindow();
		m_xinxi->ShowWindow(SW_HIDE);
		m_kecheng->ShowWindow(SW_SHOW);
		m_chengji->ShowWindow(SW_HIDE);
        m_jiankang->ShowWindow(SW_HIDE);
		m_huodong->ShowWindow(SW_HIDE);
		break;
	case 2: //弹出成绩框隐藏其他
		m_chengji->CenterWindow();
		m_xinxi->ShowWindow(SW_HIDE);
		m_kecheng->ShowWindow(SW_HIDE);
		m_chengji->ShowWindow(SW_SHOW);
        m_jiankang->ShowWindow(SW_HIDE);
		m_huodong->ShowWindow(SW_HIDE);
		break;



	case 3: //弹出健康框隐藏其他
		m_jiankang->CenterWindow();
		m_xinxi->ShowWindow(SW_HIDE);
		m_kecheng->ShowWindow(SW_HIDE);
		m_jiankang->ShowWindow(SW_SHOW);
        m_chengji->ShowWindow(SW_HIDE);
		m_huodong->ShowWindow(SW_HIDE);
		break;

    case 4: //弹出活动框隐藏其他
		m_huodong->CenterWindow();
		m_xinxi->ShowWindow(SW_HIDE);
		m_kecheng->ShowWindow(SW_HIDE);
		m_huodong->ShowWindow(SW_SHOW);
        m_jiankang->ShowWindow(SW_HIDE);
		m_chengji->ShowWindow(SW_HIDE);
		break;

	break;



	}
	*pResult = 0;
}

void jiemian::OnClose() //退出系统关闭所有对话框
{
	// TODO: Add your message handler code here and/or call default
	m_xinxi->DestroyWindow();
	delete m_xinxi;
	m_kecheng->DestroyWindow();
	delete m_kecheng;
	m_chengji->DestroyWindow();
	delete m_chengji;
    m_jiankang->DestroyWindow();
	delete m_jiankang;
	m_huodong->DestroyWindow();
	delete m_huodong;
	CDialog::OnClose();
}
