#pragma once


// ADD_STUDENT �Ի���

class ADD_STUDENT : public CDialogEx
{
	DECLARE_DYNAMIC(ADD_STUDENT)

public:
	ADD_STUDENT(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~ADD_STUDENT();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ADD_STUDENT };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:	
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCancel();
};
