#if !defined(AFX_JIANKANG_H__38F4695E_C7BE_4EE5_99A5_25532A02AFE5__INCLUDED_)
#define AFX_JIANKANG_H__38F4695E_C7BE_4EE5_99A5_25532A02AFE5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// jiankang.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// Cjiankang dialog

class Cjiankang : public CDialog
{
// Construction
public:
	Cjiankang(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(Cjiankang)
	enum { IDD = IDD_DIALOG5 };
	CListCtrl	m_grid;
	CString	m_edit1;
	CString	m_edit2;
	CString	m_edit3;
	CString	m_edit5;
	CString	m_edit6;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(Cjiankang)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(Cjiankang)
	virtual BOOL OnInitDialog();
	afx_msg void OnButton1();
	afx_msg void OnButton2();
	afx_msg void OnClickList1(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnButton6();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_JIANKANG_H__38F4695E_C7BE_4EE5_99A5_25532A02AFE5__INCLUDED_)
