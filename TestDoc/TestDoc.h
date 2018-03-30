// TestDoc.h : main header file for the TESTDOC application
//

#if !defined(AFX_TESTDOC_H__020DAC34_B0A3_4A0B_B8B7_E62180698E41__INCLUDED_)
#define AFX_TESTDOC_H__020DAC34_B0A3_4A0B_B8B7_E62180698E41__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CTestDocApp:
// See TestDoc.cpp for the implementation of this class
//

class CTestDocApp : public CWinApp
{
public:
	CTestDocApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTestDocApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CTestDocApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TESTDOC_H__020DAC34_B0A3_4A0B_B8B7_E62180698E41__INCLUDED_)
