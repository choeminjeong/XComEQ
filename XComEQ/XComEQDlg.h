
// XComEQDlg.h : ��� ����
//

#pragma once
#include "xcomproctrl1.h"
#include "afxwin.h"


// CXComEQDlg ��ȭ ����
class CXComEQDlg : public CDialogEx
{
// �����Դϴ�.
public:
	CXComEQDlg(CWnd* pParent = NULL);	// ǥ�� �������Դϴ�.

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_XCOMEQ_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV �����Դϴ�.


// �����Դϴ�.
protected:
	HICON m_hIcon;

	// ������ �޽��� �� �Լ�
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CXcomproctrl1 xcompro;
	CListBox listbox;
	afx_msg void OnBnClickedBtnInit();
	afx_msg void OnBnClickedBtnStart();
	afx_msg void OnBnClickedBtnStop2();
	DECLARE_EVENTSINK_MAP()
	void SecsEventXcomproctrl1(short nEventId, long lParam);
	afx_msg void OnBnClickedBtnSend();
	void SecsMsgXcomproctrl1();
};
