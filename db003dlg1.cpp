// db003dlg1.cpp : implementation file
//

#include "stdafx.h"
#include "xitong.h"
#include "db003dlg1.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// Cdb003dlg dialog


Cdb003dlg::Cdb003dlg(CWnd* pParent /*=NULL*/)
	: CDialog(Cdb003dlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(Cdb003dlg)
	m_strId = _T("");
	m_strName = _T("");
	m_nScore = 0;
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void Cdb003dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(Cdb003dlg)
	DDX_Control(pDX, IDC_COMBO_METHOD, m_comMethod);
	DDX_Control(pDX, IDC_COMBO_COLUMN, m_comColumn);
	DDX_Control(pDX, IDC_LIST_STUDENT, m_StudentList);
	DDX_Text(pDX, IDC_EDIT_ID, m_strId);
	DDX_Text(pDX, IDC_EDIT_NAME, m_strName);
	DDX_Text(pDX, IDC_EDIT_SCORE, m_nScore);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(Cdb003dlg, CDialog)
	//{{AFX_MSG_MAP(Cdb003dlg)
	ON_WM_SYSCOMMAND()

	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON_INSERT, OnButtonInsert)
	ON_WM_CLOSE()
	ON_BN_CLICKED(IDC_BUTTON_SAVE, OnButtonSave)
	ON_BN_CLICKED(IDC_BUTTON_CANCEL, OnButtonCancel)
	ON_BN_CLICKED(IDC_BUTTON_MOD, OnButtonMod)
	ON_BN_CLICKED(IDC_BUTTON_DEL, OnButtonDel)
	ON_NOTIFY(NM_CLICK, IDC_LIST_STUDENT, OnClickListStudent)
	ON_BN_CLICKED(IDC_BUTTON_SORT, OnButtonSort)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// Cdb003dlg message handlers

BOOL Cdb003dlg::OnInitDialog() 
{
	CDialog::OnInitDialog();
	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
		
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
		// Set small icon
	
	// TODO: Add extra initialization here
	m_StudentList.SetExtendedStyle(m_StudentList.GetExtendedStyle()|LVS_EX_FULLROWSELECT|LVS_EX_GRIDLINES);
	m_StudentList.InsertColumn(0,"学号",LVCFMT_LEFT,200);
	m_StudentList.InsertColumn(1,"姓名",LVCFMT_LEFT,200);
	m_StudentList.InsertColumn(2,"平均绩点",LVCFMT_LEFT,300);


	_bstr_t strcnn(_T("Provider=Microsoft.JET.OLEDB.4.0;Data source=student.mdb"));
	try
	{
		m_pConnection.CreateInstance(__uuidof(Connection));
		m_pConnection->Open(strcnn,_T(""),_T(""),adModeUnknown);
		m_pRecordset.CreateInstance(__uuidof(Recordset));
	}
	catch (_com_error e)
	{
		AfxMessageBox("连接数据库失败");
	}

	FreshList();
	EnableInput(FALSE);
	// TODO: Add extra initialization here
	
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}


void Cdb003dlg::OnButtonInsert() //插入按钮，定义选择后功能为1
{
	// TODO: Add your control notification handler code here
	m_nOperation=1;
	EnableInput(TRUE);
}

void Cdb003dlg::OnClose() //取消操作按钮
{
	// TODO: Add your message handler code here and/or call default
	m_pConnection->Close();
	m_pConnection.Release();
	CoUninitialize();
	CDialog::OnClose();
}

void Cdb003dlg::OnButtonSave() //保存按钮
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);
	if(m_nOperation==1)//选择添加，功能号为1
	{
		if (m_strName.IsEmpty())
		{
			AfxMessageBox("姓名不能为空");
			return;
		}
		if (m_strId.IsEmpty())
		{
			AfxMessageBox("学号不能为空");
			return;
		}
		CString strSql;
		strSql.Format(_T("INSERT INTO StudentInfo VALUES('%s','%s',%d)"),m_strId,m_strName,m_nScore);//SQL语句将信息保存在数据库中
		try
		{
			m_pConnection->Execute(_bstr_t(strSql),0,adCmdText);
		}
		catch(_com_error e)
		{
			AfxMessageBox("增加记录失败");
		}
	}
	else if (m_nOperation==2)//修改信息功能号为2
	{
		if (m_strName.IsEmpty())
		{
			AfxMessageBox("姓名不能为空");
			return;
		}
		if (m_strId.IsEmpty())
		{
			AfxMessageBox("学号不能为空");
			return;
		}
		CString strSql;
		strSql.Format(_T("UPDATE StudentInfo SET student_name=\'%s\',score=%d WHERE student_id=\'%s\'"),m_strName,m_nScore,m_strId);//SQL语句将信息保存在数据库中
		try
		{
			m_pConnection->Execute(_bstr_t(strSql),0,adCmdText);
		}
		catch(_com_error e)
		{
			AfxMessageBox("修改记录失败");
		}
	}

	FreshList();

	EnableInput(FALSE);
}

void Cdb003dlg::OnButtonCancel() 
{
	// TODO: Add your control notification handler code here
	
	EnableInput(FALSE);
}

void Cdb003dlg::FreshList()
{
	try
	{
		m_pRecordset->Open(_T("SELECT * FROM StudentInfo"),(IDispatch*)m_pConnection,\
			adOpenDynamic,adLockOptimistic,adCmdText);
		int nItem;
		m_StudentList.DeleteAllItems();
		while(!m_pRecordset->adoEOF)
		{
			nItem=m_StudentList.GetItemCount();
			CString str;
			str=(LPCTSTR)_bstr_t(m_pRecordset->GetCollect("student_id"));
			m_StudentList.InsertItem(nItem,str);
			str=(LPCTSTR)_bstr_t(m_pRecordset->GetCollect("student_name"));
			m_StudentList.SetItemText(nItem,1,str);
			str=(LPCTSTR)_bstr_t(m_pRecordset->GetCollect("score"));
			m_StudentList.SetItemText(nItem,2,str);
			m_pRecordset->MoveNext();
		}
		m_pRecordset->Close();
	}
	catch (_com_error e)
	{
		AfxMessageBox("刷新列表失败");
	}
}

void Cdb003dlg::EnableInput(BOOL bEnable)//实现允许输入
{
	CEdit *pEdit;
	CButton *pButton;
	pEdit = (CEdit *)GetDlgItem(IDC_EDIT_ID);
	pEdit->SetReadOnly(!bEnable);
	pEdit = (CEdit *)GetDlgItem(IDC_EDIT_NAME);
	pEdit->SetReadOnly(!bEnable);
	pEdit = (CEdit *)GetDlgItem(IDC_EDIT_SCORE);
	pEdit->SetReadOnly(!bEnable);

	pButton=(CButton *)GetDlgItem(IDC_BUTTON_INSERT);
	pButton->EnableWindow(!bEnable);
	pButton=(CButton *)GetDlgItem(IDC_BUTTON_DEL);
	pButton->EnableWindow(!bEnable);
	pButton=(CButton *)GetDlgItem(IDC_BUTTON_MOD);
	pButton->EnableWindow(!bEnable);
	pButton=(CButton *)GetDlgItem(IDC_BUTTON_SAVE);
	pButton->EnableWindow(bEnable);
	pButton=(CButton *)GetDlgItem(IDC_BUTTON_CANCEL);
	pButton->EnableWindow(bEnable);
}

void Cdb003dlg::OnButtonMod() //定义修改按钮
{
	// TODO: Add your control notification handler code here
	m_nOperation=2;
	EnableInput(TRUE);
	CEdit *pEdit=(CEdit*)GetDlgItem(IDC_EDIT_ID);
	pEdit->SetReadOnly(TRUE);
}

void Cdb003dlg::OnButtonDel() 
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);
	if (m_strId.IsEmpty())
	{
		AfxMessageBox("学生号不能为空");
		return;
	}
	CString strSql;
	strSql.Format(_T("DELETE FROM StudentInfo WHERE student_id=\'%s\'"),m_strId);
	try
	{
		m_pConnection->Execute((_bstr_t)strSql,0,adCmdText);
	}
	catch(_com_error e)
	{
		AfxMessageBox("删除记录失败");
	}
	FreshList();
}

void Cdb003dlg::OnClickListStudent(NMHDR* pNMHDR, LRESULT* pResult) //实现点击学生列表中信息显示到编辑框
{
	// TODO: Add your control notification handler code here
	int n=m_StudentList.GetSelectionMark();
	m_strId=m_StudentList.GetItemText(n,0);
	m_strName=m_StudentList.GetItemText(n,1);
	CString str1=m_StudentList.GetItemText(n,2);
	m_nScore=atoi(str1.GetBuffer(10));
	str1.ReleaseBuffer();
	UpdateData(FALSE);
	*pResult = 0;
}

void Cdb003dlg::GetSortData(LPCTSTR lpszKey, BOOL bAsc)//排序功能的实现
{
	CString strOrder=bAsc?"ASC":"DESC";
	CString strSql;
	strSql.Format(_T("SELECT * FROM StudentInfo ORDER BY %s %s"),lpszKey,strOrder);
	try
	{
		m_pRecordset->Open((_bstr_t)strSql,(IDispatch*)m_pConnection,adOpenDynamic,adLockOptimistic,adCmdText);
		int nItem;
		m_StudentList.DeleteAllItems();
		while(!m_pRecordset->adoEOF)
		{
			nItem=m_StudentList.GetItemCount();
			CString str;
			str=(LPCTSTR)_bstr_t(m_pRecordset->GetCollect("student_id"));
			m_StudentList.InsertItem(nItem,str);
			str=(LPCTSTR)_bstr_t(m_pRecordset->GetCollect("student_name"));
			m_StudentList.SetItemText(nItem,1,str);
			str=(LPCTSTR)_bstr_t(m_pRecordset->GetCollect("score"));
			m_StudentList.SetItemText(nItem,2,str);
			m_pRecordset->MoveNext();
		}
		m_pRecordset->Close();
	}
	catch(_com_error e)
	{
		AfxMessageBox("刷新列表失败");
	}
}

void Cdb003dlg::OnButtonSort() 
{
	// TODO: Add your control notification handler code here
	int nIndex=m_comMethod.GetCurSel();
	if (nIndex==-1)
	{
		return;
	}
	BOOL bAsc=FALSE;
	if (nIndex==0)
	{
		bAsc=TRUE;
	}
	nIndex=m_comColumn.GetCurSel();
	if (nIndex==-1)
	{
		return;
	}
	CString strKey;
	if (nIndex==0)
	{
		strKey="student_id";
	}
	if (nIndex==1)
	{
		strKey="score";
	}
	GetSortData(strKey,bAsc);
}
