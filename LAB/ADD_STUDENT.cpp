// ADD_STUDENT.cpp : 实现文件
//

#include "stdafx.h"
#include "LAB.h"
#include "ADD_STUDENT.h"
#include "afxdialogex.h"
#include"student.h"


// ADD_STUDENT 对话框

IMPLEMENT_DYNAMIC(ADD_STUDENT, CDialogEx)

ADD_STUDENT::ADD_STUDENT(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_ADD_STUDENT, pParent)
{

}

ADD_STUDENT::~ADD_STUDENT()
{
}

void ADD_STUDENT::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(ADD_STUDENT, CDialogEx)
	ON_BN_CLICKED(IDOK, &ADD_STUDENT::OnBnClickedOk)
	ON_BN_CLICKED(IDCANCEL, &ADD_STUDENT::OnBnClickedCancel)
END_MESSAGE_MAP()




void ADD_STUDENT::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
	CString id, name, NJ, major;
	Student st;
	GetDlgItem(IDC_SID)->GetWindowText(id);
	GetDlgItem(IDC_SNAME)->GetWindowText(name);
	GetDlgItem(IDC_SNJ)->GetWindowText(NJ);
	GetDlgItem(IDC_MAJOR)->GetWindowText(major);
	UpdateData(TRUE);
	if (id == "\0" || name == "\0" || NJ == "\0" || major == "\0")
		MessageBox(_T("请输入完整的信息！"));
	if (st.IsExist(_ttoi(id))) {
		MessageBox(_T("该学生已经存在！"));
		return;
	}
	else {
		USES_CONVERSION;
		//调用函数，T2A和W2A均支持ATL和MFC中的字符转换
		int sid = _ttoi(id);
		char * sname = T2A(name);
		char*sNJ = T2A(NJ);
		char*smajor = T2A(major);
		StInfo s;
		s.id = sid;
		strcpy(s.name, sname);
		strcpy(s.NJ, sNJ);
		strcpy(s.major, smajor);
		st.Add(s);
		MessageBox(_T("添加成功！"));
	}
}


void ADD_STUDENT::OnBnClickedCancel()
{
	// TODO: 在此添加控件通知处理程序代码
	CDialogEx::OnOK();
}
