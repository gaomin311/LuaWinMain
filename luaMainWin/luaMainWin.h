
// luaMainWin.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CluaMainWinApp: 
// �йش����ʵ�֣������ luaMainWin.cpp
//

class CluaMainWinApp : public CWinApp
{
public:
	CluaMainWinApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CluaMainWinApp theApp;