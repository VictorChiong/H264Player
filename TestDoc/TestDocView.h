// TestDocView.h : interface of the CTestDocView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_TESTDOCVIEW_H__BF6CB431_6E18_4A21_A88D_79046DCEFA07__INCLUDED_)
#define AFX_TESTDOCVIEW_H__BF6CB431_6E18_4A21_A88D_79046DCEFA07__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CTestDocView : public CView
{
protected: // create from serialization only
	CTestDocView();
	DECLARE_DYNCREATE(CTestDocView)

// Attributes
public:
	CTestDocDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTestDocView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CTestDocView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CTestDocView)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in TestDocView.cpp
inline CTestDocDoc* CTestDocView::GetDocument()
   { return (CTestDocDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TESTDOCVIEW_H__BF6CB431_6E18_4A21_A88D_79046DCEFA07__INCLUDED_)
