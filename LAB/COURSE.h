#pragma once


// COURSE �Ի���

class COURSE : public CDialogEx
{
	DECLARE_DYNAMIC(COURSE)

public:
	COURSE(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~COURSE();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_COURSE };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedAddCourse();
	afx_msg void OnBnClickedDeleteCourse();
	afx_msg void OnBnClickedDodifyCourse();
	afx_msg void OnBnClickedModifyCourse();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
};
