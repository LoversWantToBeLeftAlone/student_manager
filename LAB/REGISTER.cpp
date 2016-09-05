// REGISTER.cpp : 实现文件
//

#include "stdafx.h"
#include "LAB.h"
#include "REGISTER.h"
#include "afxdialogex.h"
//#include"student.h"
//#include"course_manager.h"
#include"SC.h"
// REGISTER 对话框

IMPLEMENT_DYNAMIC(REGISTER, CDialogEx)

REGISTER::REGISTER(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_REGISTER, pParent)
{

}

REGISTER::~REGISTER()
{
}

void REGISTER::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(REGISTER, CDialogEx)
	ON_CBN_SELCHANGE(IDC_SCOMBO, &REGISTER::OnCbnSelchangeScombo)
	ON_BN_CLICKED(IDOK2, &REGISTER::OnBnClickedOk2)
	ON_CBN_SELCHANGE(IDC_CCOMBO, &REGISTER::OnCbnSelchangeCcombo)
	ON_BN_CLICKED(IDCANCEL, &REGISTER::OnBnClickedCancel)
	ON_BN_CLICKED(IDOK, &REGISTER::OnBnClickedOk)
END_MESSAGE_MAP()


// REGISTER 消息处理程序


void REGISTER::OnCbnSelchangeScombo()
{
	// TODO: 在此添加控件通知处理程序代码
	int index1;
	CString value1;
	index1 = ((CComboBox*)GetDlgItem(IDC_SCOMBO))->GetCurSel();
	((CComboBox*)GetDlgItem(IDC_SCOMBO))->GetLBText(index1, value1);
	if (!value1.IsEmpty()) {
		Student s;
		StInfo st = s.Search(_ttoi(value1));
		SetDlgItemText(IDC_SNAME, (CString)st.name);
		SetDlgItemText(IDC_SNJ, (CString)st.NJ);
		SetDlgItemText(IDC_SMAJOR, (CString)st.major);
	}
}


void REGISTER::OnBnClickedOk2()
{
	// TODO: 在此添加控件通知处理程序代码
	//按照文件导入
	Student s;
	Node *h = s.GetAll();
	for (Node*p = h;p != NULL;p = p->next) {
		int id = p->info.id;
		CString cid;
		cid.Format(_T("%d"), id);
		((CComboBox*)GetDlgItem(IDC_SCOMBO))->AddString(cid);
	}
	Course c;
	CNode*ch = c.GetAll();
	for (CNode*p = ch;p != NULL;p = p->next) {
		int id = p->info.id;
		CString cid;
		cid.Format(_T("%d"), id);
		((CComboBox*)GetDlgItem(IDC_CCOMBO))->AddString(cid);
	}
}
void REGISTER::OnCbnSelchangeCcombo()
{
	// TODO: 在此添加控件通知处理程序代码
	int index2;
	CString value2;
	index2 = ((CComboBox*)GetDlgItem(IDC_CCOMBO))->GetCurSel();
	((CComboBox*)GetDlgItem(IDC_CCOMBO))->GetLBText(index2, value2);
	if (!value2.IsEmpty()) {
		Course s;
		CInfo st = s.Search(_ttoi(value2));
		CString cid, credit;
		cid.Format(_T("%d"), st.id);
		credit.Format(_T("%d"), st.credit);
		SetDlgItemText(IDC_CID, cid);
		SetDlgItemText(IDC_CNAME, (CString)st.name);
		SetDlgItemText(IDC_CREDIT, credit);
	}

}


void REGISTER::OnBnClickedCancel()
{
	// TODO: 在此添加控件通知处理程序代码
	CDialogEx::OnOK();
}


void REGISTER::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
//	CDialogEx::OnOK();
	Register r;
	Student s;
	Course c;
	int sindex = ((CComboBox*)GetDlgItem(IDC_SCOMBO))->GetCurSel();
	int cindex = ((CComboBox*)GetDlgItem(IDC_CCOMBO))->GetCurSel();
	CString id1, id2;
	((CComboBox*)GetDlgItem(IDC_SCOMBO))->GetLBText(sindex, id1);
	((CComboBox*)GetDlgItem(IDC_CCOMBO))->GetLBText(cindex, id2);
	int sid = _ttoi(id1);
	int cid = _ttoi(id2);
	StInfo st = s.Search(sid);
	CInfo co = c.Search(cid);
	r.Choice(st, co);
	MessageBox(_T("成功添加"));
}
