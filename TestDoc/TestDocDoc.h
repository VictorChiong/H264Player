// TestDocDoc.h : interface of the CTestDocDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_TESTDOCDOC_H__725C7981_A915_498E_9E45_B1FD2030FB00__INCLUDED_)
#define AFX_TESTDOCDOC_H__725C7981_A915_498E_9E45_B1FD2030FB00__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CTestDocDoc : public CDocument
{
protected: // create from serialization only
	CTestDocDoc();
	DECLARE_DYNCREATE(CTestDocDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTestDocDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CTestDocDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CTestDocDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TESTDOCDOC_H__725C7981_A915_498E_9E45_B1FD2030FB00__INCLUDED_)
