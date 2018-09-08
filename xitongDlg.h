// xitongDlg.h : header file
//

#if !defined(AFX_XITONGDLG_H__F3CC3672_A535_4999_AC60_4788253F7A61__INCLUDED_)
#define AFX_XITONGDLG_H__F3CC3672_A535_4999_AC60_4788253F7A61__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CXitongDlg dialog

class CXitongDlg : public CDialog
{
// Construction
public:
	CXitongDlg(CWnd* pParent = NULL);	// standard constructor
    
// Dialog Data
	//{{AFX_DATA(CXitongDlg)
	enum { IDD = IDD_XITONG_DIALOG };
	CButton	m_Button;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CXitongDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CXitongDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnButton1();
	afx_msg void OnButton2();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_XITONGDLG_H__F3CC3672_A535_4999_AC60_4788253F7A61__INCLUDED_)
