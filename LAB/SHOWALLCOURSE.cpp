// SHOWALLCOURSE.cpp : 实现文件
//

#include "stdafx.h"
#include "LAB.h"
#include "SHOWALLCOURSE.h"
#include "afxdialogex.h"
#include"course_manager.h"

// SHOWALLCOURSE 对话框

IMPLEMENT_DYNAMIC(SHOWALLCOURSE, CDialogEx)

SHOWALLCOURSE::SHOWALLCOURSE(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG2, pParent)
{

}

SHOWALLCOURSE::~SHOWALLCOURSE()
{
}

void SHOWALLCOURSE::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(SHOWALLCOURSE, CDialogEx)
	ON_BN_CLICKED(IDOK, &SHOWALLCOURSE::OnBnClickedOk)
END_MESSAGE_MAP()


// SHOWALLCOURSE 消息处理程序


void SHOWALLCOURSE::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
//	CDialogEx::OnOK();
	CString content = _T("");
	Course s;
	CNode *h = s.GetAll();
	for (CNode *p = h;p != NULL;p = p->next) {
		CString id;
		id.Format(_T("%d"), p->info.id);
		content.Append(id);
		content.Append(_T("	"));
		content.Append((CString)p->info.name);
		content.Append(_T("	"));
		CString credit;
		credit.Format(_T("%d"), p->info.credit);
		credit.Append(_T("\r\n"));
		content.Append(credit);
	}
	SetDlgItemText(IDC_EDIT1, content);
}
