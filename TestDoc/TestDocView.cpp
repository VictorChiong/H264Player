// TestDocView.cpp : implementation of the CTestDocView class
//

#include "stdafx.h"
#include "TestDoc.h"

#include "TestDocDoc.h"
#include "TestDocView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CTestDocView

IMPLEMENT_DYNCREATE(CTestDocView, CView)

BEGIN_MESSAGE_MAP(CTestDocView, CView)
	//{{AFX_MSG_MAP(CTestDocView)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTestDocView construction/destruction

CTestDocView::CTestDocView()
{
	// TODO: add construction code here

}

CTestDocView::~CTestDocView()
{
}

BOOL CTestDocView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CTestDocView drawing

void CTestDocView::OnDraw(CDC* pDC)
{
	CTestDocDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CTestDocView printing

BOOL CTestDocView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CTestDocView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CTestDocView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CTestDocView diagnostics

#ifdef _DEBUG
void CTestDocView::AssertValid() const
{
	CView::AssertValid();
}

void CTestDocView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CTestDocDoc* CTestDocView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CTestDocDoc)));
	return (CTestDocDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CTestDocView message handlers
