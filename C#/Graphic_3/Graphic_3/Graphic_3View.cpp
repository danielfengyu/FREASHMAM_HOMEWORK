
// Graphic_3View.cpp : CGraphic_3View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Graphic_3.h"
#endif

#include "Graphic_3Doc.h"
#include "Graphic_3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CGraphic_3View

IMPLEMENT_DYNCREATE(CGraphic_3View, CView)

BEGIN_MESSAGE_MAP(CGraphic_3View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CGraphic_3View::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// CGraphic_3View 构造/析构

CGraphic_3View::CGraphic_3View()
{
	// TODO: 在此处添加构造代码

}

CGraphic_3View::~CGraphic_3View()
{
}

BOOL CGraphic_3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CGraphic_3View 绘制

void CGraphic_3View::OnDraw(CDC* pDC)
{
	CGraphic_3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	CRect rect;
	GetClientRect(&rect);
	pDC->SetMapMode (MM_ANISOTROPIC);
	pDC->SetWindowExt (rect.Width (),rect.Height ());
	pDC->SetViewportExt (rect.Width (),-rect.Height ());
	pDC->SetViewportOrg(rect.Width ()/2,rect.Height()/2);
	CPoint p0(-100,-50),p1(-50,50);
	CPen NewPen,*pOldPen;
	NewPen.CreatePen(PS_SOLID,1,RGB(0,0,255));
	pOldPen=pDC->SelectObject(&NewPen);
	pDC->MoveTo (p0);
	pDC->LineTo(p1);
	pDC->SelectObject(pOldPen);
}


// CGraphic_3View 打印


void CGraphic_3View::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL CGraphic_3View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CGraphic_3View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CGraphic_3View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}

void CGraphic_3View::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CGraphic_3View::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CGraphic_3View 诊断

#ifdef _DEBUG
void CGraphic_3View::AssertValid() const
{
	CView::AssertValid();
}

void CGraphic_3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CGraphic_3Doc* CGraphic_3View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CGraphic_3Doc)));
	return (CGraphic_3Doc*)m_pDocument;
}
#endif //_DEBUG


// CGraphic_3View 消息处理程序
