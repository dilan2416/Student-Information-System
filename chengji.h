#if !defined(AFX_CHENGJI_H__C220786B_48AF_41E5_B1DA_9D358BEEA7E4__INCLUDED_)
#define AFX_CHENGJI_H__C220786B_48AF_41E5_B1DA_9D358BEEA7E4__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// chengji.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// Cchengji dialog

class Cchengji : public CDialog
{
// Construction
public:
	Cchengji(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(Cchengji)
	enum { IDD = IDD_DIALOG4 };
	CListCtrl	m_grid;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(Cchengji)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(Cchengji)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CHENGJI_H__C220786B_48AF_41E5_B1DA_9D358BEEA7E4__INCLUDED_)
