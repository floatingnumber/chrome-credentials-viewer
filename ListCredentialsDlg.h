#pragma once
#include "resource.h"

// CListDriveDlg �Ի���

class CListDriveDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CListDriveDlg)

public:
	CListDriveDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CListDriveDlg();

	enum { IDD = IDD_LIST_CREDENTIALS_DLG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
