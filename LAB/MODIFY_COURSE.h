#pragma once


// MODIFY_COURSE �Ի���

class MODIFY_COURSE : public CDialogEx
{
	DECLARE_DYNAMIC(MODIFY_COURSE)

public:
	MODIFY_COURSE(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~MODIFY_COURSE();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MODIFY_COURSE };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedButton1();
};
