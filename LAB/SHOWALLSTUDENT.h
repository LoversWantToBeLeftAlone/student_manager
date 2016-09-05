#pragma once


// SHOWALLSTUDENT 对话框

class SHOWALLSTUDENT : public CDialogEx
{
	DECLARE_DYNAMIC(SHOWALLSTUDENT)

public:
	SHOWALLSTUDENT(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~SHOWALLSTUDENT();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SHOWALL };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
};
