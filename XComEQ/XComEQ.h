
// XComEQ.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CXComEQApp:
// �� Ŭ������ ������ ���ؼ��� XComEQ.cpp�� �����Ͻʽÿ�.
//

class CXComEQApp : public CWinApp
{
public:
	CXComEQApp();

// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CXComEQApp theApp;