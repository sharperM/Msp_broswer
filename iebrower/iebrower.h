
// iebrower.h : iebrower Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CiebrowerApp:
// �йش����ʵ�֣������ iebrower.cpp
//

class CiebrowerApp : public CWinApp
{
public:
	CiebrowerApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��

public:
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CiebrowerApp theApp;
