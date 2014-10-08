
// Graphic_4View.cpp : CGraphic_4View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "Graphic_4.h"
#endif

#include "Graphic_4Doc.h"
#include "Graphic_4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CGraphic_4View

IMPLEMENT_DYNCREATE(CGraphic_4View, CView)

BEGIN_MESSAGE_MAP(CGraphic_4View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CGraphic_4View::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// CGraphic_4View ����/����

CGraphic_4View::CGraphic_4View()
{
	// TODO: �ڴ˴���ӹ������

}

CGraphic_4View::~CGraphic_4View()
{
}

BOOL CGraphic_4View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CGraphic_4View ����

void CGraphic_4View::OnDraw(CDC* pDC)
{
	CGraphic_4Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CRect rect;
	GetClientRect(&rect);
	pDC->SetMapMode (MM_ANISOTROPIC);
	pDC->SetWindowExt (rect.Width (),rect.Height ());
	pDC->SetViewportExt (rect.Width (),-rect.Height ());
	pDC->SetViewportOrg(rect.Width ()/2,rect.Height()/2);
	rect.OffsetRect (-rect.Width ()/2,-rect.Height()/2);
	rect.DeflateRect (100,100);
	CBrush NewBrush,*pOldBrush;
	pOldBrush=(CBrush*)pDC->SelectStockObject(NULL_BRUSH);
	int r=rect.Height ()/2;
	CRect rect1(CPoint(-r,-r),CPoint(r,r));
	pDC->Ellipse (rect1);
	pDC->Ellipse (rect);
	pDC->Rectangle(rect);
	pDC->SelectObject (pOldBrush);
}


// CGraphic_4View ��ӡ


void CGraphic_4View::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL CGraphic_4View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CGraphic_4View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CGraphic_4View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}

void CGraphic_4View::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CGraphic_4View::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CGraphic_4View ���

#ifdef _DEBUG
void CGraphic_4View::AssertValid() const
{
	CView::AssertValid();
}

void CGraphic_4View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CGraphic_4Doc* CGraphic_4View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CGraphic_4Doc)));
	return (CGraphic_4Doc*)m_pDocument;
}
#endif //_DEBUG


// CGraphic_4View ��Ϣ�������
