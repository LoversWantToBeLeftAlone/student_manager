#pragma once


// DELETE_COURSE �Ի���

class DELETE_COURSE : public CDialogEx
{
	DECLARE_DYNAMIC(DELETE_COURSE)

public:
	DELETE_COURSE(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~DELETE_COURSE();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DELETE_COURSE };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
};
