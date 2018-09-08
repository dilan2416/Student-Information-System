#if !defined(AFX_CUSTOMTOOLBAR_H__9F912F34_69D8_4BB6_8455_3925AE9301D3__INCLUDED_)
#define AFX_CUSTOMTOOLBAR_H__9F912F34_69D8_4BB6_8455_3925AE9301D3__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// CustomToolBar.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CCustomToolBar window

class CCustomToolBar : public CToolBarCtrl
{
// Construction
public:
	CCustomToolBar();
    
// Attributes
public:
void DrawButton(CDC *pDC, const RECT &rect, UINT uState);
// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCustomToolBar)
	//}}AFX_VIRTUAL

// Implementation
public:

	virtual ~CCustomToolBar();

	// Generated message map functions
protected:
	//{{AFX_MSG(CCustomToolBar)
	afx_msg void OnOwnerDraw( NMHDR * pNotifyStruct, LRESULT* pResult );
	//}}AFX_MSG

	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CUSTOMTOOLBAR_H__9F912F34_69D8_4BB6_8455_3925AE9301D3__INCLUDED_)
