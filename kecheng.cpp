// kecheng.cpp : implementation file
//

#include "stdafx.h"
#include "xitong.h"
#include "kecheng.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// Ckecheng dialog


Ckecheng::Ckecheng(CWnd* pParent /*=NULL*/)
	: CDialog(Ckecheng::IDD, pParent)
{
	//{{AFX_DATA_INIT(Ckecheng)
	m_edit1 = _T("");

	//}}AFX_DATA_INIT
}


void Ckecheng::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(Ckecheng)
	DDX_Control(pDX, IDC_LIST2, m_List);
	DDX_Control(pDX, IDC_COMBO1, m_combo);
	DDX_Text(pDX, IDC_EDIT1, m_edit1);

	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(Ckecheng, CDialog)
	//{{AFX_MSG_MAP(Ckecheng)
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	ON_BN_CLICKED(IDC_BUTTON2, OnButton2)

	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// Ckecheng message handlers

void Ckecheng::OnButton1() 
{
	// TODO: Add your control notification handler code here
	pos=m_combo.GetCurSel();
	if(pos==0)
    {
	m_List.ResetContent();
	m_List.AddString("�ߵ���ѧѡ��������");
	m_List.AddString("����");
	m_List.AddString("����");
	m_List.AddString("����");	
    m_List.AddString("����");	
	m_List.AddString("����");	
	m_List.AddString("����");
	m_List.AddString("����");
	}
	else if(pos==1)
	{
	m_List.ResetContent();
	m_List.AddString("��ѧӢ��ѡ��������");
	m_List.AddString("����");
	m_List.AddString("����");
	m_List.AddString("����");	
    m_List.AddString("����");	

	}
	else if(pos==2)
	{
	m_List.ResetContent();
	m_List.AddString("��ѧ����ѡ��������");
	m_List.AddString("����");
	m_List.AddString("����");
	m_List.AddString("����");	
    m_List.AddString("����");	
	m_List.AddString("����");	

	}
	else
	{
	m_List.ResetContent();
	m_List.AddString("������ѡ��������");
	m_List.AddString("����");
	m_List.AddString("����");
	m_List.AddString("����");	
    m_List.AddString("����");	
	m_List.AddString("����");	

	}

}

void Ckecheng::OnButton2() 
{
UpdateData(TRUE);

m_List.AddString(m_edit1);	
}


