// SHOWALLSTUDENT.cpp : 实现文件
//

#include "stdafx.h"
#include "LAB.h"
#include "SHOWALLSTUDENT.h"
#include "afxdialogex.h"
#include"student.h"

// SHOWALLSTUDENT 对话框

IMPLEMENT_DYNAMIC(SHOWALLSTUDENT, CDialogEx)

SHOWALLSTUDENT::SHOWALLSTUDENT(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_SHOWALL, pParent)
{

}

SHOWALLSTUDENT::~SHOWALLSTUDENT()
{
}

void SHOWALLSTUDENT::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(SHOWALLSTUDENT, CDialogEx)
	ON_BN_CLICKED(IDOK, &SHOWALLSTUDENT::OnBnClickedOk)
END_MESSAGE_MAP()


// SHOWALLSTUDENT 消息处理程序


void SHOWALLSTUDENT::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
//	CDialogEx::OnOK();
	CString content = _T("");
	Student s;
	Node *h = s.GetAll();
	for (Node *p = h;p != NULL;p = p->next) {
		CString id;
		id.Format(_T("%d"), p->info.id);
		content.Append(id);
		content.Append(_T("	"));
		content.Append((CString)p->info.name);
		content.Append(_T("	"));
		content.Append((CString)p->info.NJ);
		content.Append(_T("	"));
		content.Append((CString)p->info.major);
		content.Append(_T("\r\n"));
	}
	SetDlgItemText(IDC_EDIT1, content);
}
