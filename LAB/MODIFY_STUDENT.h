#pragma once


// MODIFY_STUDENT �Ի���

class MODIFY_STUDENT : public CDialogEx
{
	DECLARE_DYNAMIC(MODIFY_STUDENT)

public:
	MODIFY_STUDENT(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~MODIFY_STUDENT();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MODIFY_STUDENT };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedButton1();
};
