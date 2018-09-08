#if !defined(AFX_DB003DLG1_H__BB7C2705_4692_41DE_8EF2_A715106DEDB8__INCLUDED_)
#define AFX_DB003DLG1_H__BB7C2705_4692_41DE_8EF2_A715106DEDB8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// db003dlg1.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// Cdb003dlg dialog

class Cdb003dlg : public CDialog
{
// Construction
public:
	void GetSortData(LPCTSTR lpszKey, BOOL bAsc);
	void EnableInput(BOOL bEnable);
	void FreshList();
	Cdb003dlg(CWnd* pParent = NULL);   // standard constructor
    int m_nOperation;
	_RecordsetPtr m_pRecordset;
	_ConnectionPtr m_pConnection;
// Dialog Data
	//{{AFX_DATA(Cdb003dlg)
	enum { IDD = IDD_DB003_DIALOG };
	CComboBox	m_comMethod;
	CComboBox	m_comColumn;
	CListCtrl	m_StudentList;
	CString	m_strId;
	CString	m_strName;
	UINT	m_nScore;
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(Cdb003dlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
HICON m_hIcon;
	// Generated message map functions
	//{{AFX_MSG(Cdb003dlg)
	virtual BOOL OnInitDialog();
	
	afx_msg void OnButtonInsert();
	afx_msg void OnClose();
	afx_msg void OnButtonSave();
	afx_msg void OnButtonCancel();
	afx_msg void OnButtonMod();
	afx_msg void OnButtonDel();
	afx_msg void OnClickListStudent(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnButtonSort();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DB003DLG1_H__BB7C2705_4692_41DE_8EF2_A715106DEDB8__INCLUDED_)
