#pragma once


// COURSE 对话框

class COURSE : public CDialogEx
{
	DECLARE_DYNAMIC(COURSE)

public:
	COURSE(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~COURSE();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_COURSE };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedAddCourse();
	afx_msg void OnBnClickedDeleteCourse();
	afx_msg void OnBnClickedDodifyCourse();
	afx_msg void OnBnClickedModifyCourse();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
};
