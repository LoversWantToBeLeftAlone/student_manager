#pragma once


// SHOWALLSTUDENT �Ի���

class SHOWALLSTUDENT : public CDialogEx
{
	DECLARE_DYNAMIC(SHOWALLSTUDENT)

public:
	SHOWALLSTUDENT(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~SHOWALLSTUDENT();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SHOWALL };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
};
