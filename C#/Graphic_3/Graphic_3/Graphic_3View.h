
// Graphic_3View.h : CGraphic_3View ��Ľӿ�
//

#pragma once


class CGraphic_3View : public CView
{
protected: // �������л�����
	CGraphic_3View();
	DECLARE_DYNCREATE(CGraphic_3View)

// ����
public:
	CGraphic_3Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~CGraphic_3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // Graphic_3View.cpp �еĵ��԰汾
inline CGraphic_3Doc* CGraphic_3View::GetDocument() const
   { return reinterpret_cast<CGraphic_3Doc*>(m_pDocument); }
#endif

