#pragma once


// REGISTERINFO �Ի���

class REGISTERINFO : public CDialogEx
{
	DECLARE_DYNAMIC(REGISTERINFO)

public:
	REGISTERINFO(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~REGISTERINFO();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_REGISTERCOND };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
};
