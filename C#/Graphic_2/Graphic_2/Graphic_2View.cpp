
// Graphic_2View.cpp : CGraphic_2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Graphic_2.h"
#endif

#include "Graphic_2Doc.h"
#include "Graphic_2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CGraphic_2View

IMPLEMENT_DYNCREATE(CGraphic_2View, CView)

BEGIN_MESSAGE_MAP(CGraphic_2View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CGraphic_2View::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// CGraphic_2View 构造/析构

CGraphic_2View::CGraphic_2View()
{
	// TODO: 在此处添加构造代码

}

CGraphic_2View::~CGraphic_2View()
{
}

BOOL CGraphic_2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CGraphic_2View 绘制

void CGraphic_2View::OnDraw(CDC* pDC)
{
	CGraphic_2Doc* pDoc = GetDocument();
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
	srand((unsigned)time(NULL));
	COLORREF crColor;
	int x,y;
	for(y=-50;y<50;y++)
		for(x=-150;x<-50;x++)
			pDC->SetPixelV(x,y,RGB(rand()%255,rand()%255,rand()%255));
		for(y=-50;y<50;y++)
			for(x=-150;x<-50;x++)
			{
				crColor=pDC->GetPixel(x,y);
				pDC->SetPixelV(x+200,y,crColor);
			}
}


// CGraphic_2View 打印


void CGraphic_2View::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL CGraphic_2View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CGraphic_2View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CGraphic_2View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}

void CGraphic_2View::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CGraphic_2View::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CGraphic_2View 诊断

#ifdef _DEBUG
void CGraphic_2View::AssertValid() const
{
	CView::AssertValid();
}

void CGraphic_2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CGraphic_2Doc* CGraphic_2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CGraphic_2Doc)));
	return (CGraphic_2Doc*)m_pDocument;
}
#endif //_DEBUG


// CGraphic_2View 消息处理程序
