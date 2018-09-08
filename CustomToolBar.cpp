// CustomToolBar.cpp : implementation file
//

#include "stdafx.h"
#include "xitong.h"
#include "CustomToolBar.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CCustomToolBar

CCustomToolBar::CCustomToolBar()
{
}

CCustomToolBar::~CCustomToolBar()
{
}


BEGIN_MESSAGE_MAP(CCustomToolBar, CToolBarCtrl)
	//{{AFX_MSG_MAP(CCustomToolBar)

	//}}AFX_MSG_MAP
	ON_NOTIFY_REFLECT(NM_CUSTOMDRAW, OnOwnerDraw)

END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CCustomToolBar message handlers


void CCustomToolBar::OnOwnerDraw(NMHDR *pNotifyStruct, LRESULT *pResult)
{
	NMTBCUSTOMDRAW *pCustomDraw = (NMTBCUSTOMDRAW *)pNotifyStruct;
	CDC	dc;
	dc.Attach(pCustomDraw->nmcd.hdc);
	pCustomDraw->clrText = RGB(0,0,255);
	switch (pCustomDraw->nmcd.dwDrawStage)
	{
	case CDDS_PREPAINT:
		*pResult = CDRF_NOTIFYITEMDRAW;
		break;
	case CDDS_ITEMPREPAINT:
		DrawButton(&dc, pCustomDraw->nmcd.rc, pCustomDraw->nmcd.uItemState);
		*pResult = TBCDRF_NOEDGES; //不绘按钮边框
		break;
	}
	dc.Detach();
}
void CCustomToolBar::DrawButton(CDC *pDC, const RECT &rect, UINT uState)
{
	CPoint pt;
	GetCursorPos(&pt);
	ScreenToClient(&pt);
	CRect rc;
	GetClientRect(rc);
	if(rc.PtInRect(pt))
	{
		if(uState & CDIS_HOT)
		{
			CBrush Brush(RGB(220, 220, 220));
			pDC->SelectObject(&Brush);
			pDC->Rectangle(&rect);
			pDC->DrawEdge(CRect(rect),BDR_RAISEDINNER|BDR_RAISEDOUTER,
				BF_BOTTOMLEFT|BF_TOPRIGHT);				//绘制立体效果
		}
	}
}

