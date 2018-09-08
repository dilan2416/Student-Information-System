// jiankang.cpp : implementation file
//

#include "stdafx.h"
#include "xitong.h"
#include "jiankang.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// Cjiankang dialog


Cjiankang::Cjiankang(CWnd* pParent /*=NULL*/)
	: CDialog(Cjiankang::IDD, pParent)
{

	//{{AFX_DATA_INIT(Cjiankang)
	m_edit1 = _T("");
	m_edit2 = _T("");
	m_edit3 = _T("");
	m_edit5 = _T("");
	m_edit6 = _T("");
	//}}AFX_DATA_INIT
}


void Cjiankang::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(Cjiankang)
	DDX_Control(pDX, IDC_LIST1, m_grid);
	DDX_Text(pDX, IDC_EDIT1, m_edit1);
	DDX_Text(pDX, IDC_EDIT2, m_edit2);
	DDX_Text(pDX, IDC_EDIT3, m_edit3);
	DDX_Text(pDX, IDC_EDIT5, m_edit5);
	DDX_Text(pDX, IDC_EDIT6, m_edit6);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(Cjiankang, CDialog)
	//{{AFX_MSG_MAP(Cjiankang)
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	ON_BN_CLICKED(IDC_BUTTON2, OnButton2)
	ON_NOTIFY(NM_CLICK, IDC_LIST1, OnClickList1)
	ON_BN_CLICKED(IDC_BUTTON6, OnButton6)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// Cjiankang message handlers

BOOL Cjiankang::OnInitDialog() 
{
	CDialog::OnInitDialog();
	m_grid.SetExtendedStyle(LVS_EX_FLATSB	//扁平风格显示滚动条
		|LVS_EX_FULLROWSELECT				//允许整行选中
		|LVS_EX_HEADERDRAGDROP				//允许整列拖动
		|LVS_EX_ONECLICKACTIVATE			//单击选中项
		|LVS_EX_GRIDLINES);					//画出网格线
   
	m_grid.InsertColumn(0,"姓名",LVCFMT_LEFT,100,0);
	m_grid.InsertColumn(1,"身高",LVCFMT_LEFT,80,0);
	m_grid.InsertColumn(2,"体重",LVCFMT_LEFT,80,0);
	m_grid.InsertColumn(3,"健康状况",LVCFMT_LEFT,200,1); 
    m_grid.InsertColumn(4,"疾病情况",LVCFMT_LEFT,250,0); 
	m_grid.InsertItem(0, _T(""));	//添加第一个同学信息
    m_grid.SetItemText(0,0,"张三");
	m_grid.SetItemText(0,1,"185CM");
	m_grid.SetItemText(0,2,"82KG");
	m_grid.SetItemText(0,3,"良好");
	m_grid.SetItemText(0,4,"哮喘病"); 
//添加第二个同学
	m_grid.InsertItem(1, _T(""));
    m_grid.SetItemText(1,0,"李八");
	m_grid.SetItemText(1,1,"175CM");
	m_grid.SetItemText(1,2,"65KG");
	m_grid.SetItemText(1,3,"优秀");
	m_grid.SetItemText(1,4,"无");
//添加第三个同学
	m_grid.InsertItem(2, _T(""));
	m_grid.SetItemText(2,0,"王九");
	m_grid.SetItemText(2,1,"165CM");
	m_grid.SetItemText(2,2,"50KG");
	m_grid.SetItemText(2,3,"良好");
	m_grid.SetItemText(2,4,"无");
//添加第四个同学
	m_grid.InsertItem(3, _T(""));
	m_grid.SetItemText(3,0,"王八");
	m_grid.SetItemText(3,1,"170CM");
	m_grid.SetItemText(3,2,"60KG");
	m_grid.SetItemText(3,3,"良好");
	m_grid.SetItemText(3,4,"哮喘病");
//添加第五个同学
	m_grid.InsertItem(4, _T(""));
	m_grid.SetItemText(4,0,"张黄");
	m_grid.SetItemText(4,1,"175CM");
	m_grid.SetItemText(4,2,"65KG");
	m_grid.SetItemText(4,3,"优秀");
	m_grid.SetItemText(4,4,"无");


	// TODO: Add extra initialization here
	
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void Cjiankang::OnButton1() 
{
    UpdateData(TRUE);
	int count = m_grid.GetItemCount();
	m_grid.InsertItem(count,"");
	m_grid.SetItemText(count,0,m_edit1);
	m_grid.SetItemText(count,1,m_edit5);
	m_grid.SetItemText(count,2,m_edit6);
	m_grid.SetItemText(count,3,m_edit3);
	m_grid.SetItemText(count,4,m_edit3);
}

void Cjiankang::OnButton2() 
{
	// TODO: Add your control notification handler code here
	int pos  = m_grid.GetSelectionMark();
	m_grid.DeleteItem(pos);
}

void Cjiankang::OnClickList1(NMHDR* pNMHDR, LRESULT* pResult) 
{
	// TODO: Add your control notification handler code here
	int n=m_grid.GetSelectionMark();
	m_edit1=m_grid.GetItemText(n,0);
	m_edit5=m_grid.GetItemText(n,1);
	m_edit6=m_grid.GetItemText(n,2);
	m_edit2=m_grid.GetItemText(n,3);
	m_edit3=m_grid.GetItemText(n,4);
	UpdateData(FALSE);
	*pResult = 0;
}

void Cjiankang::OnButton6() 
{
	// TODO: Add your control notification handler code here
	    UpdateData(TRUE);	
	int n=m_grid.GetSelectionMark();
	m_grid.SetItemText(n,0,m_edit1);
	m_grid.SetItemText(n,1,m_edit5);
	m_grid.SetItemText(n,2,m_edit6);
	m_grid.SetItemText(n,3,m_edit2);
	m_grid.SetItemText(n,4,m_edit3);

}
