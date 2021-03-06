
// ImportConverterDlg.h : header file
//

#pragma once
#include "CPXV_Control.h"
#include "CustomImportConverter.h"


// CImportConverterDlg dialog
class CImportConverterDlg : public CDialog
{
// Construction
public:
	CImportConverterDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_IMPORTCONVERTER_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

protected:
	CPXV_Control		pdfCtl;
public:
	afx_msg void OnFileOpenfile();
	afx_msg void OnFileOpensamplecsv();
};
