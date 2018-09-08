#if !defined(AFX_HUODONG_H__7AFFA580_0DF2_4801_A457_361DA8E65CDD__INCLUDED_)
#define AFX_HUODONG_H__7AFFA580_0DF2_4801_A457_361DA8E65CDD__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// huodong.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// Chuodong dialog

class Chuodong : public CDialog
{
// Construction
public:
	Chuodong(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(Chuodong)
	enum { IDD = IDD_DIALOG6 };
	CListCtrl	m_grid;
	CString	m_edit1;
	CString	m_edit2;
	CString	m_edit4;
	CString	m_edit3;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(Chuodong)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(Chuodong)
	virtual BOOL OnInitDialog();
	afx_msg void OnButton2();
	afx_msg void OnButton4();
	afx_msg void OnClickList2(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnButton5();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_HUODONG_H__7AFFA580_0DF2_4801_A457_361DA8E65CDD__INCLUDED_)
