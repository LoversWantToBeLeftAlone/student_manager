// DELETE_COURSE.cpp : 实现文件
//

#include "stdafx.h"
#include "LAB.h"
#include "DELETE_COURSE.h"
#include "afxdialogex.h"
#include"course_manager.h"

// DELETE_COURSE 对话框

IMPLEMENT_DYNAMIC(DELETE_COURSE, CDialogEx)

DELETE_COURSE::DELETE_COURSE(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DELETE_COURSE, pParent)
{

}

DELETE_COURSE::~DELETE_COURSE()
{
}

void DELETE_COURSE::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(DELETE_COURSE, CDialogEx)
	ON_BN_CLICKED(IDOK, &DELETE_COURSE::OnBnClickedOk)
END_MESSAGE_MAP()


// DELETE_COURSE 消息处理程序


void DELETE_COURSE::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
//	CDialogEx::OnOK();
	CString id;
	GetDlgItem(IDC_CID)->GetWindowText(id);
	if (id.IsEmpty())
		MessageBox(_T("请输入课程编号..."));
	else {
		Course st;
		int i = _ttoi(id);
		if (!st.IsExist(i))
			MessageBox(_T("该课程不存在！"));
		else {
			st.Delete(i);
			MessageBox(_T("删除成功！"));
		}
	}
}
