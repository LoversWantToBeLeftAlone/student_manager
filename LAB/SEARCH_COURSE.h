#pragma once


// SEARCH_COURSE �Ի���

class SEARCH_COURSE : public CDialogEx
{
	DECLARE_DYNAMIC(SEARCH_COURSE)

public:
	SEARCH_COURSE(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~SEARCH_COURSE();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SEARCH_COURSE };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
};
