#pragma once


// DELETE_STUDENT �Ի���

class DELETE_STUDENT : public CDialogEx
{
	DECLARE_DYNAMIC(DELETE_STUDENT)

public:
	DELETE_STUDENT(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~DELETE_STUDENT();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DELETE_STUDENT };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
};
