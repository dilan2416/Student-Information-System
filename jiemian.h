#if !defined(AFX_JIEMIAN_H__A831268B_CE10_4C12_B004_FBA8D4AA276D__INCLUDED_)
#define AFX_JIEMIAN_H__A831268B_CE10_4C12_B004_FBA8D4AA276D__INCLUDED_
#include "CustomToolBar.h"
#include "xinxi.h"
#include "kecheng.h"
#include "chengji.h"
#include "jiankang.h"
#include "huodong.h"
#include "db003dlg1.h"

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// jiemian.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// jiemian dialog

class jiemian : public CDialog
{
// Construction
public:
	jiemian(CWnd* pParent = NULL);   // standard constructor
    CToolBar m_ToolBar;
	CImageList m_ImageList;
	CString m_TipText;
	Cxinxi* m_xinxi;
	Ckecheng* m_kecheng;
	Cdb003dlg* m_chengji;
	Cjiankang* m_jiankang;
	Chuodong* m_huodong;
	void jiemian::OnClose();
// Dialog Data
	//{{AFX_DATA(jiemian)
	enum { IDD = IDD_DIALOG1 };
	CTabCtrl	m_Tab;

	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(jiemian)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(jiemian)
	virtual BOOL OnInitDialog();
	afx_msg BOOL OnToolTipNotify( UINT id, NMHDR * pNMHDR, LRESULT * pResult );
	afx_msg void OnSelchangeTab1(NMHDR* pNMHDR, LRESULT* pResult);

	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_JIEMIAN_H__A831268B_CE10_4C12_B004_FBA8D4AA276D__INCLUDED_)
