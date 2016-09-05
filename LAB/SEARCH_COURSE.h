#pragma once


// SEARCH_COURSE 对话框

class SEARCH_COURSE : public CDialogEx
{
	DECLARE_DYNAMIC(SEARCH_COURSE)

public:
	SEARCH_COURSE(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~SEARCH_COURSE();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SEARCH_COURSE };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
};
