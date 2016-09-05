// DELETE_STUDENT.cpp : 实现文件
//

#include "stdafx.h"
#include "LAB.h"
#include "DELETE_STUDENT.h"
#include "afxdialogex.h"
#include"student.h"

// DELETE_STUDENT 对话框

IMPLEMENT_DYNAMIC(DELETE_STUDENT, CDialogEx)

DELETE_STUDENT::DELETE_STUDENT(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DELETE_STUDENT, pParent)
{

}

DELETE_STUDENT::~DELETE_STUDENT()
{
}

void DELETE_STUDENT::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(DELETE_STUDENT, CDialogEx)
	ON_BN_CLICKED(IDOK, &DELETE_STUDENT::OnBnClickedOk)
END_MESSAGE_MAP()


// DELETE_STUDENT 消息处理程序


void DELETE_STUDENT::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
//	CDialogEx::OnOK();
	CString id;
	GetDlgItem(IDC_EDIT1)->GetWindowText(id);
	if (id.IsEmpty())
		MessageBox(_T("请输入学号..."));
	else {
		Student st;
		int i = _ttoi(id);
		if (!st.IsExist(i))
			MessageBox(_T("该学生不存在！"));
		else {
			st.Delete(i);
			MessageBox(_T("删除成功！"));
		}
	}
}
