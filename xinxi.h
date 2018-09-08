#if !defined(AFX_XINXI_H__497D952B_15D7_4F75_95DA_724F66349406__INCLUDED_)
#define AFX_XINXI_H__497D952B_15D7_4F75_95DA_724F66349406__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// xinxi.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// Cxinxi dialog

class Cxinxi : public CDialog
{
// Construction
public:
	Cxinxi(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(Cxinxi)
	enum { IDD = IDD_DIALOG2 };
	CListCtrl	m_grid;
	CString	m_edit1;
	CString	m_edit2;
	CString	m_edit4;
	CString	m_edit3;
	CString	m_edit6;
	CString	m_edit5;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(Cxinxi)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(Cxinxi)
	virtual BOOL OnInitDialog();
	afx_msg void OnButton1();
	afx_msg void OnButton2();
	afx_msg void OnClickList1(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnButton6();
	afx_msg void OnButton7();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_XINXI_H__497D952B_15D7_4F75_95DA_724F66349406__INCLUDED_)
