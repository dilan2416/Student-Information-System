// chengji.cpp : implementation file
//

#include "stdafx.h"
#include "xitong.h"
#include "chengji.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// Cchengji dialog


Cchengji::Cchengji(CWnd* pParent /*=NULL*/)
	: CDialog(Cchengji::IDD, pParent)
{
	//{{AFX_DATA_INIT(Cchengji)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void Cchengji::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(Cchengji)
	DDX_Control(pDX, IDC_LIST1, m_grid);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(Cchengji, CDialog)
	//{{AFX_MSG_MAP(Cchengji)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// Cchengji message handlers
