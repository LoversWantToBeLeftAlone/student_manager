#pragma once


// SEARCH_STUDENT 对话框

class SEARCH_STUDENT : public CDialogEx
{
	DECLARE_DYNAMIC(SEARCH_STUDENT)

public:
	SEARCH_STUDENT(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~SEARCH_STUDENT();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SEARCH_STUDENT };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
};
