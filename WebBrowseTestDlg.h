// WebBrowseTestDlg.h : 头文件
//

#pragma once
#include "CWebBrowser2.h"

// CWebBrowseTestDlg 对话框
class CWebBrowseTestDlg : public CDialog
{
// 构造
public:
	CWebBrowseTestDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_WEBBROWSETEST_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;
	CWebBrowser2 m_web;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
};
