// SEARCH_COURSE.cpp : 实现文件
//

#include "stdafx.h"
#include "LAB.h"
#include "SEARCH_COURSE.h"
#include "afxdialogex.h"
#include"course_manager.h"

// SEARCH_COURSE 对话框

IMPLEMENT_DYNAMIC(SEARCH_COURSE, CDialogEx)

SEARCH_COURSE::SEARCH_COURSE(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_SEARCH_COURSE, pParent)
{

}

SEARCH_COURSE::~SEARCH_COURSE()
{
}

void SEARCH_COURSE::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(SEARCH_COURSE, CDialogEx)
	ON_BN_CLICKED(IDOK, &SEARCH_COURSE::OnBnClickedOk)
END_MESSAGE_MAP()


// SEARCH_COURSE 消息处理程序


void SEARCH_COURSE::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
//	CDialogEx::OnOK();
	Course cou;
	CString id;
	GetDlgItemText(IDC_EDIT1, id);
	if (id.IsEmpty())
		MessageBox(_T("请输入课程编号..."));
	else {
		int i = _ttoi(id);
		if (!cou.IsExist(i))
			MessageBox(_T("课程编号不存在！，请核对..."));
		else {
			CInfo c = cou.Search(i);
			CString cid, Ccredit;
			cid.Format(_T("%d"), c.id);
			Ccredit.Format(_T("%d"), c.credit);
			SetDlgItemText(IDC_EDIT2,cid);
			SetDlgItemText(IDC_EDIT3, (CString)c.name);
			SetDlgItemText(IDC_EDIT4, Ccredit);
		}
	}
}
