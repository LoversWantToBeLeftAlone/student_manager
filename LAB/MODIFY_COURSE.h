#pragma once


// MODIFY_COURSE 对话框

class MODIFY_COURSE : public CDialogEx
{
	DECLARE_DYNAMIC(MODIFY_COURSE)

public:
	MODIFY_COURSE(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~MODIFY_COURSE();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MODIFY_COURSE };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedButton1();
};
