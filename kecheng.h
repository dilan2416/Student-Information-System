#if !defined(AFX_KECHENG_H__9AC3C787_F465_422D_832E_11CE49B4D19D__INCLUDED_)
#define AFX_KECHENG_H__9AC3C787_F465_422D_832E_11CE49B4D19D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// kecheng.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// Ckecheng dialog

class Ckecheng : public CDialog
{
// Construction
public:
	Ckecheng(CWnd* pParent = NULL);   // standard constructor
    int pos;
// Dialog Data
	//{{AFX_DATA(Ckecheng)
	enum { IDD = IDD_DIALOG3 };
	CListBox	m_List;
	CComboBox	m_combo;
	CString	m_edit1;
	CString	m_edit2;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(Ckecheng)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(Ckecheng)
	afx_msg void OnButton1();
	afx_msg void OnButton2();

	afx_msg void OnSelchangeList2();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_KECHENG_H__9AC3C787_F465_422D_832E_11CE49B4D19D__INCLUDED_)
