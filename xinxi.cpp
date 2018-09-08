// xinxi.cpp : implementation file
//

#include "stdafx.h"
#include "xitong.h"
#include "xinxi.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// Cxinxi dialog


Cxinxi::Cxinxi(CWnd* pParent /*=NULL*/)
	: CDialog(Cxinxi::IDD, pParent)
{
	//{{AFX_DATA_INIT(Cxinxi)
	m_edit1 = _T("");
	m_edit2 = _T("");
	m_edit4 = _T("");
	m_edit3 = _T("");
	m_edit6 = _T("");
	m_edit5 = _T("");
	//}}AFX_DATA_INIT
}


void Cxinxi::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(Cxinxi)
	DDX_Control(pDX, IDC_LIST1, m_grid);
	DDX_Text(pDX, IDC_EDIT1, m_edit1);
	DDX_Text(pDX, IDC_EDIT2, m_edit2);
	DDX_Text(pDX, IDC_EDIT4, m_edit4);
	DDX_Text(pDX, IDC_EDIT3, m_edit3);
	DDX_Text(pDX, IDC_EDIT6, m_edit6);
	DDX_Text(pDX, IDC_EDIT5, m_edit5);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(Cxinxi, CDialog)
	//{{AFX_MSG_MAP(Cxinxi)
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	ON_BN_CLICKED(IDC_BUTTON2, OnButton2)
	ON_NOTIFY(NM_CLICK, IDC_LIST1, OnClickList1)
	ON_BN_CLICKED(IDC_BUTTON6, OnButton6)
	ON_BN_CLICKED(IDC_BUTTON7, OnButton7)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// Cxinxi message handlers





BOOL Cxinxi::OnInitDialog() //��ʼ��
{
	CDialog::OnInitDialog();
    m_grid.SetExtendedStyle(LVS_EX_FLATSB	//��ƽ�����ʾ������
		|LVS_EX_FULLROWSELECT				//��������ѡ��
		|LVS_EX_HEADERDRAGDROP				//���������϶�
		|LVS_EX_ONECLICKACTIVATE			//����ѡ����
		|LVS_EX_GRIDLINES);					//����������
	m_grid.InsertColumn(0,"ѧ��",LVCFMT_LEFT,100,0); //�����б�ؼ��ı�����
	m_grid.InsertColumn(1,"����",LVCFMT_LEFT,80,1); 
	m_grid.InsertColumn(2,"�Ա�",LVCFMT_LEFT,80,2); 
    m_grid.InsertColumn(3,"�༶",LVCFMT_LEFT,120,3);
    m_grid.InsertColumn(4,"��ϵ��ʽ",LVCFMT_LEFT,150,4);
    m_grid.InsertColumn(5,"�ҳ���ϵ��ʽ",LVCFMT_LEFT,170,5);


	//�����б�ؼ�����
	//��ʼ����һ����
	
	m_grid.InsertItem(0, _T(""));
    m_grid.SetItemText(0,0,"0001");
	m_grid.SetItemText(0,1,"����");
	m_grid.SetItemText(0,2,"��");  
	m_grid.SetItemText(0,3,"����һ��");  
	m_grid.SetItemText(0,4,"110");  
	m_grid.SetItemText(0,5,"119");  

	//��ʼ���ڶ�����
	m_grid.InsertItem(1, _T(""));
    m_grid.SetItemText(1,0,"0002");
	m_grid.SetItemText(1,1,"����");
	m_grid.SetItemText(1,2,"Ů");  
	m_grid.SetItemText(1,3,"����һ��");  
	m_grid.SetItemText(1,4,"120");  
	m_grid.SetItemText(1,5,"110");  

	//��ʼ����������
	m_grid.InsertItem(2, _T(""));
    m_grid.SetItemText(2,0,"0003");
	m_grid.SetItemText(2,1,"����");
	m_grid.SetItemText(2,2,"��");  
	m_grid.SetItemText(2,3,"����һ��");  
	m_grid.SetItemText(2,4,"112");  
	m_grid.SetItemText(2,5,"133");  


    return TRUE;
	 // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void Cxinxi::OnButton1() 
{
	// TODO: Add your control notification handler code here


}

void Cxinxi::OnButton2() 
{
	// TODO: Add your control notification handler code here
UpdateData(TRUE);
	int count = m_grid.GetItemCount();
	m_grid.InsertItem(count,"");
	m_grid.SetItemText(count,0,m_edit1);
	m_grid.SetItemText(count,1,m_edit2);
	m_grid.SetItemText(count,2,m_edit3);
	m_grid.SetItemText(count,3,m_edit4);
	m_grid.SetItemText(count,4,m_edit5);
	m_grid.SetItemText(count,5,m_edit6);
}

void Cxinxi::OnClickList1(NMHDR* pNMHDR, LRESULT* pResult) 
{
	// TODO: Add your control notification handler code here
	int n=m_grid.GetSelectionMark();
	m_edit1=m_grid.GetItemText(n,0);
	m_edit2=m_grid.GetItemText(n,1);
	m_edit3=m_grid.GetItemText(n,2);
	m_edit4=m_grid.GetItemText(n,3);
	m_edit5=m_grid.GetItemText(n,4);
	m_edit6=m_grid.GetItemText(n,5);
	UpdateData(FALSE);	
	*pResult = 0;

}

void Cxinxi::OnButton6() 
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);	
	int n=m_grid.GetSelectionMark();
	m_grid.SetItemText(n,0,m_edit1);
	m_grid.SetItemText(n,1,m_edit2);
	m_grid.SetItemText(n,2,m_edit3);
	m_grid.SetItemText(n,3,m_edit4);
	m_grid.SetItemText(n,4,m_edit5);
	m_grid.SetItemText(n,5,m_edit6);

}

void Cxinxi::OnButton7() 
{
	// TODO: Add your control notification handler code here
	int pos  = m_grid.GetSelectionMark();
	m_grid.DeleteItem(pos);
}
