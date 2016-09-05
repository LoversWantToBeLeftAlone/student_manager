// SHOWALLSTUDENT.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "LAB.h"
#include "SHOWALLSTUDENT.h"
#include "afxdialogex.h"
#include"student.h"

// SHOWALLSTUDENT �Ի���

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


// SHOWALLSTUDENT ��Ϣ�������


void SHOWALLSTUDENT::OnBnClickedOk()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
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
