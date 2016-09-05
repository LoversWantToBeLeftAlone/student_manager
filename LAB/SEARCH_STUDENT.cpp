// SEARCH_STUDENT.cpp : 实现文件
// 
#include "stdafx.h"
#ifndef _UNICODE  
#define _UNICODE            //使用UNICODE编码  
#endif  
#include "LAB.h"
#include "SEARCH_STUDENT.h"
#include "afxdialogex.h"
#include "student.h"
#include<vector>

// SEARCH_STUDENT 对话框

IMPLEMENT_DYNAMIC(SEARCH_STUDENT, CDialogEx)

SEARCH_STUDENT::SEARCH_STUDENT(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_SEARCH_STUDENT, pParent)
{

}

SEARCH_STUDENT::~SEARCH_STUDENT()
{
}

void SEARCH_STUDENT::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(SEARCH_STUDENT, CDialogEx)
	ON_BN_CLICKED(IDOK, &SEARCH_STUDENT::OnBnClickedOk)
END_MESSAGE_MAP()


// SEARCH_STUDENT 消息处理程序


void SEARCH_STUDENT::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
	CString id = _T("");
	GetDlgItem(IDC_EDIT1)->GetWindowText(id);//获取文本框内容
	if (id.IsEmpty())
		MessageBox(_T("请输入学号！"));
	else {
		StInfo s;
		int cid = _ttoi(id);
		Student st;
		if (!st.IsExist(cid))
			MessageBox(_T("学号不存在！请核对..."));
		else {
			s = st.Search(cid);
			SetDlgItemText(IDC_EDIT3, (CString)s.name);//设置文本框内容
			SetDlgItemText(IDC_EDIT2, (CString)s.NJ);
			SetDlgItemText(IDC_EDIT4, (CString)s.major);
		}
	}
}
