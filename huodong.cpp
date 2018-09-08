// huodong.cpp : implementation file
//

#include "stdafx.h"
#include "xitong.h"
#include "huodong.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// Chuodong dialog


Chuodong::Chuodong(CWnd* pParent /*=NULL*/)
	: CDialog(Chuodong::IDD, pParent)
{
	//{{AFX_DATA_INIT(Chuodong)
	m_edit1 = _T("");
	m_edit2 = _T("");
	m_edit4 = _T("");
	m_edit3 = _T("");
	//}}AFX_DATA_INIT
}


void Chuodong::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(Chuodong)
	DDX_Control(pDX, IDC_LIST2, m_grid);
	DDX_Text(pDX, IDC_EDIT1, m_edit1);
	DDX_Text(pDX, IDC_EDIT2, m_edit2);
	DDX_Text(pDX, IDC_EDIT4, m_edit4);
	DDX_Text(pDX, IDC_EDIT3, m_edit3);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(Chuodong, CDialog)
	//{{AFX_MSG_MAP(Chuodong)
	ON_BN_CLICKED(IDC_BUTTON2, OnButton2)
	ON_BN_CLICKED(IDC_BUTTON4, OnButton4)
	ON_NOTIFY(NM_CLICK, IDC_LIST2, OnClickList2)
	ON_BN_CLICKED(IDC_BUTTON5, OnButton5)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// Chuodong message handlers

BOOL Chuodong::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
    m_grid.SetExtendedStyle(LVS_EX_FLATSB
		|LVS_EX_FULLROWSELECT		
		|LVS_EX_HEADERDRAGDROP				
		|LVS_EX_ONECLICKACTIVATE			
		|LVS_EX_GRIDLINES);					
    m_grid.InsertItem(0, _T(""));	
	m_grid.InsertColumn(0,"姓名",LVCFMT_LEFT,130,0); 
	m_grid.InsertColumn(1,"参加社团",LVCFMT_LEFT,200,1); 
    m_grid.InsertColumn(2,"体育运动",LVCFMT_LEFT,200,2); 
    m_grid.InsertColumn(3,"义工活动",LVCFMT_LEFT,200,3); 
    m_grid.SetItemText(0,0,"张三");
	m_grid.SetItemText(0,1,"辩论队");
	m_grid.SetItemText(0,2,"无");  
	m_grid.SetItemText(0,3,"助童分会");  
	m_grid.InsertItem(1, _T(""));
    m_grid.SetItemText(1,0,"李八");
	m_grid.SetItemText(1,1,"无");
	m_grid.SetItemText(1,2,"篮球队");
	m_grid.SetItemText(1,3,"助老协会");
	m_grid.InsertItem(2, _T(""));
	m_grid.SetItemText(2,0,"王九");
	m_grid.SetItemText(2,1,"无");
	m_grid.SetItemText(2,2,"羽毛球队");
	m_grid.SetItemText(2,3,"红十字会");
	m_grid.InsertItem(3, _T(""));
	m_grid.SetItemText(3,0,"王八");
	m_grid.SetItemText(3,1,"无");
	m_grid.SetItemText(3,2,"无");
	m_grid.SetItemText(3,3,"无");
	m_grid.InsertItem(4, _T(""));
	m_grid.SetItemText(4,0,"廖六");
	m_grid.SetItemText(4,1,"无");
	m_grid.SetItemText(4,2,"足球队");
	m_grid.SetItemText(4,3,"无");
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void Chuodong::OnButton2() 
{
	// TODO: Add your control notification handler code here
	    UpdateData(TRUE);
	int count = m_grid.GetItemCount();
	m_grid.InsertItem(count,"");
	m_grid.SetItemText(count,0,m_edit1);
	m_grid.SetItemText(count,1,m_edit2);
	m_grid.SetItemText(count,2,m_edit3);
	m_grid.SetItemText(count,3,m_edit4);
}

void Chuodong::OnButton4() 
{
	// TODO: Add your control notification handler code here
		int pos  = m_grid.GetSelectionMark();
	m_grid.DeleteItem(pos);
}

void Chuodong::OnClickList2(NMHDR* pNMHDR, LRESULT* pResult) 
{
	int n=m_grid.GetSelectionMark();
	m_edit1=m_grid.GetItemText(n,0);
	m_edit2=m_grid.GetItemText(n,1);
	m_edit3=m_grid.GetItemText(n,2);
	m_edit4=m_grid.GetItemText(n,3);
	UpdateData(FALSE);	
	*pResult = 0;
}

void Chuodong::OnButton5() 
{
	// TODO: Add your control notification handler code here
    UpdateData(TRUE);	
	int n=m_grid.GetSelectionMark();
	m_grid.SetItemText(n,0,m_edit1);
	m_grid.SetItemText(n,1,m_edit2);
	m_grid.SetItemText(n,2,m_edit3);
	m_grid.SetItemText(n,3,m_edit4);

}
