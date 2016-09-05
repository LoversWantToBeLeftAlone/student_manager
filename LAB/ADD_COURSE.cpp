// ADD_COURSE.cpp : 实现文件
//

#include "stdafx.h"
#include "LAB.h"
#include "ADD_COURSE.h"
#include "afxdialogex.h"
#include"course_manager.h"

// ADD_COURSE 对话框

IMPLEMENT_DYNAMIC(ADD_COURSE, CDialogEx)

ADD_COURSE::ADD_COURSE(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_ADD_COURSE, pParent)
{

}

ADD_COURSE::~ADD_COURSE()
{
}

void ADD_COURSE::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(ADD_COURSE, CDialogEx)
	ON_BN_CLICKED(IDOK, &ADD_COURSE::OnBnClickedOk)
END_MESSAGE_MAP()


// ADD_COURSE 消息处理程序


void ADD_COURSE::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
//	CDialogEx::OnOK();
	CString cid, cname,credit;
	Course C;
	GetDlgItem(IDC_CID)->GetWindowText(cid);
	GetDlgItem(IDC_CNAME)->GetWindowText(cname);
	GetDlgItem(IDC_CCREDIT)->GetWindowText(credit);
	UpdateData(TRUE);
	if (cid == "\0" || cname == "\0" || credit == "\0" )
		MessageBox(_T("请输入完整的信息！"));
	if (C.IsExist(_ttoi(cid))) {
		MessageBox(_T("该课程已经存在！"));
		return;
	}
	else {
		USES_CONVERSION;
		//调用函数，T2A和W2A均支持ATL和MFC中的字符转换
		int id = _ttoi(cid);
		char * name = T2A(cname);
		int Ccredit = _ttoi(credit);
		CInfo s;
		s.id = id;
		strcpy(s.name, name);
		s.credit = Ccredit;
		C.Add(s);
		MessageBox(_T("添加成功！"));
	}
}
