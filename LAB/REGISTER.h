#pragma once


// REGISTER �Ի���

class REGISTER : public CDialogEx
{
	DECLARE_DYNAMIC(REGISTER)

public:
	REGISTER(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~REGISTER();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_REGISTER };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnCbnSelchangeScombo();
	afx_msg void OnBnClickedOk2();
	afx_msg void OnCbnSelchangeCcombo();
	afx_msg void OnBnClickedCancel();
	afx_msg void OnBnClickedOk();
};
