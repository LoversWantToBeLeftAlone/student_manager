#pragma once


// ADD_STUDENT 对话框

class ADD_STUDENT : public CDialogEx
{
	DECLARE_DYNAMIC(ADD_STUDENT)

public:
	ADD_STUDENT(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~ADD_STUDENT();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ADD_STUDENT };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:	
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCancel();
};
