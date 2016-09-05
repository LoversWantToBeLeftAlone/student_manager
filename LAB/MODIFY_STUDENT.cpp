// MODIFY_STUDENT.cpp : 实现文件
//

#include "stdafx.h"
#include "LAB.h"
#include "MODIFY_STUDENT.h"
#include "afxdialogex.h"
#include "student.h"

// MODIFY_STUDENT 对话框

IMPLEMENT_DYNAMIC(MODIFY_STUDENT, CDialogEx)

MODIFY_STUDENT::MODIFY_STUDENT(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_MODIFY_STUDENT, pParent)
{

}

MODIFY_STUDENT::~MODIFY_STUDENT()
{
}

void MODIFY_STUDENT::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(MODIFY_STUDENT, CDialogEx)
	ON_BN_CLICKED(IDOK, &MODIFY_STUDENT::OnBnClickedOk)
	ON_BN_CLICKED(IDC_BUTTON1, &MODIFY_STUDENT::OnBnClickedButton1)
END_MESSAGE_MAP()


// MODIFY_STUDENT 消息处理程序


void MODIFY_STUDENT::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
//	CDialogEx::OnOK();
	CString id, name, NJ,major;
	GetDlgItem(IDC_EDIT1)->GetWindowText(id);
	GetDlgItem(IDC_EDIT2)->GetWindowText(name);
	GetDlgItem(IDC_EDIT3)->GetWindowText(NJ);
	GetDlgItem(IDC_EDIT4)->GetWindowText(major);
	if (id == "\0" || name == "\0" || NJ == "\0"||major=="\0")
		MessageBox(_T("请输入完整的信息！"));
	else {
		USES_CONVERSION;
		//调用函数，T2A和W2A均支持ATL和MFC中的字符转换
		int cid = _ttoi(id);
		char * cname = T2A(name);
//		int ccredit = _ttoi(credit);
		char *cnj = T2A(NJ);
		char *cmajor = T2A(major);
		StInfo s;
		s.id = cid;
		strcpy(s.name, cname);
		strcpy(s.NJ, cnj);
		strcpy(s.major, cmajor);
		Student st;
		if (!st.IsExist(cid)) {
			MessageBox(_T("该学生不存在，无法修改！"));
		}
		else {
			st.Modify(cid, s);
			MessageBox(_T("成功修改！"));
		}
	}
}


void MODIFY_STUDENT::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
//	UpdateData(TRUE);
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
			SetDlgItemText(IDC_EDIT2, (CString)s.name);
			SetDlgItemText(IDC_EDIT3, (CString)s.NJ);
			SetDlgItemText(IDC_EDIT4, (CString)s.major);
		}
	}
}
