// WebBrowseTestDlg.h : ͷ�ļ�
//

#pragma once
#include "CWebBrowser2.h"

// CWebBrowseTestDlg �Ի���
class CWebBrowseTestDlg : public CDialog
{
// ����
public:
	CWebBrowseTestDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_WEBBROWSETEST_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;
	CWebBrowser2 m_web;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
};
