#pragma once


// SHOWALLCOURSE �Ի���

class SHOWALLCOURSE : public CDialogEx
{
	DECLARE_DYNAMIC(SHOWALLCOURSE)

public:
	SHOWALLCOURSE(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~SHOWALLCOURSE();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
};
