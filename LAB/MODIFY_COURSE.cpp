// MODIFY_COURSE.cpp : 实现文件
//

#include "stdafx.h"
#include "LAB.h"
#include "MODIFY_COURSE.h"
#include "afxdialogex.h"
#include"course_manager.h"

// MODIFY_COURSE 对话框

IMPLEMENT_DYNAMIC(MODIFY_COURSE, CDialogEx)

MODIFY_COURSE::MODIFY_COURSE(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_MODIFY_COURSE, pParent)
{

}

MODIFY_COURSE::~MODIFY_COURSE()
{
}

void MODIFY_COURSE::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(MODIFY_COURSE, CDialogEx)
	ON_BN_CLICKED(IDOK, &MODIFY_COURSE::OnBnClickedOk)
	ON_BN_CLICKED(IDC_BUTTON1, &MODIFY_COURSE::OnBnClickedButton1)
END_MESSAGE_MAP()


// MODIFY_COURSE 消息处理程序


void MODIFY_COURSE::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
//	CDialogEx::OnOK();
	CString id, name, credit;
	GetDlgItem(IDC_CID)->GetWindowText(id);
	GetDlgItem(IDC_CNAME)->GetWindowText(name);
	GetDlgItem(IDC_CCREDIT)->GetWindowText(credit);
	if (id == "\0" || name == "\0" || credit == "\0")
		MessageBox(_T("请输入完整的信息！"));
	else {
		USES_CONVERSION;
		//调用函数，T2A和W2A均支持ATL和MFC中的字符转换
		int cid = _ttoi(id);
		char * cname = T2A(name);
		int ccredit = _ttoi(credit);
		CInfo s;
		s.id = cid;
		strcpy(s.name, cname);
		s.credit = ccredit;
		Course st;
		if (!st.IsExist(cid)) {
			MessageBox(_T("该课程不存在，无法修改！"));
		}
		else {
			st.Modify(cid, s);
			MessageBox(_T("成功修改！"));
		}
	}
}


void MODIFY_COURSE::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	Course cou;
	CString id;
	GetDlgItemText(IDC_CID, id);
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
			SetDlgItemText(IDC_CID, cid);
			SetDlgItemText(IDC_CNAME, (CString)c.name);
			SetDlgItemText(IDC_CCREDIT, Ccredit);
		}
	}
}
