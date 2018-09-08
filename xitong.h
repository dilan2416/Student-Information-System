// xitong.h : main header file for the XITONG application
//

#if !defined(AFX_XITONG_H__C7190C29_648A_4BBE_A446_D7AB5D2DBCC1__INCLUDED_)
#define AFX_XITONG_H__C7190C29_648A_4BBE_A446_D7AB5D2DBCC1__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CXitongApp:
// See xitong.cpp for the implementation of this class
//

class CXitongApp : public CWinApp
{
public:
	CXitongApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CXitongApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CXitongApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_XITONG_H__C7190C29_648A_4BBE_A446_D7AB5D2DBCC1__INCLUDED_)
