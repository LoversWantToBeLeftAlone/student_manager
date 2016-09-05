#pragma once


// DELETE_COURSE 对话框

class DELETE_COURSE : public CDialogEx
{
	DECLARE_DYNAMIC(DELETE_COURSE)

public:
	DELETE_COURSE(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~DELETE_COURSE();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DELETE_COURSE };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
};
