#pragma once


// SEARCH_STUDENT �Ի���

class SEARCH_STUDENT : public CDialogEx
{
	DECLARE_DYNAMIC(SEARCH_STUDENT)

public:
	SEARCH_STUDENT(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~SEARCH_STUDENT();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SEARCH_STUDENT };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
};
