// TestDocDoc.cpp : implementation of the CTestDocDoc class
//

#include "stdafx.h"
#include "TestDoc.h"

#include "TestDocDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CTestDocDoc

IMPLEMENT_DYNCREATE(CTestDocDoc, CDocument)

BEGIN_MESSAGE_MAP(CTestDocDoc, CDocument)
	//{{AFX_MSG_MAP(CTestDocDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTestDocDoc construction/destruction

CTestDocDoc::CTestDocDoc()
{
	// TODO: add one-time construction code here

}

CTestDocDoc::~CTestDocDoc()
{
}

BOOL CTestDocDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CTestDocDoc serialization

void CTestDocDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CTestDocDoc diagnostics

#ifdef _DEBUG
void CTestDocDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CTestDocDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CTestDocDoc commands
