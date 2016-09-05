#pragma once


// REGISTERINFO 对话框

class REGISTERINFO : public CDialogEx
{
	DECLARE_DYNAMIC(REGISTERINFO)

public:
	REGISTERINFO(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~REGISTERINFO();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_REGISTERCOND };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
};
