#pragma once


// DELETE_STUDENT 对话框

class DELETE_STUDENT : public CDialogEx
{
	DECLARE_DYNAMIC(DELETE_STUDENT)

public:
	DELETE_STUDENT(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~DELETE_STUDENT();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DELETE_STUDENT };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
};
