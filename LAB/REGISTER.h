#pragma once


// REGISTER 对话框

class REGISTER : public CDialogEx
{
	DECLARE_DYNAMIC(REGISTER)

public:
	REGISTER(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~REGISTER();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_REGISTER };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnCbnSelchangeScombo();
	afx_msg void OnBnClickedOk2();
	afx_msg void OnCbnSelchangeCcombo();
	afx_msg void OnBnClickedCancel();
	afx_msg void OnBnClickedOk();
};
