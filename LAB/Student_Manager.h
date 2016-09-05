#pragma once


// Student_Manager 对话框

class Student_Manager : public CDialogEx
{
	DECLARE_DYNAMIC(Student_Manager)

public:
	Student_Manager(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~Student_Manager();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_STUDENT };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedAddStudent();
	afx_msg void OnBnClickedDeleteStudent();
	afx_msg void OnBnClickedModifyStudent();
	afx_msg void OnBnClickedSearchStudent();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton1();
};
