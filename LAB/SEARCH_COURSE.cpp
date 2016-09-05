// SEARCH_COURSE.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "LAB.h"
#include "SEARCH_COURSE.h"
#include "afxdialogex.h"
#include"course_manager.h"

// SEARCH_COURSE �Ի���

IMPLEMENT_DYNAMIC(SEARCH_COURSE, CDialogEx)

SEARCH_COURSE::SEARCH_COURSE(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_SEARCH_COURSE, pParent)
{

}

SEARCH_COURSE::~SEARCH_COURSE()
{
}

void SEARCH_COURSE::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(SEARCH_COURSE, CDialogEx)
	ON_BN_CLICKED(IDOK, &SEARCH_COURSE::OnBnClickedOk)
END_MESSAGE_MAP()


// SEARCH_COURSE ��Ϣ�������


void SEARCH_COURSE::OnBnClickedOk()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
//	CDialogEx::OnOK();
	Course cou;
	CString id;
	GetDlgItemText(IDC_EDIT1, id);
	if (id.IsEmpty())
		MessageBox(_T("������γ̱��..."));
	else {
		int i = _ttoi(id);
		if (!cou.IsExist(i))
			MessageBox(_T("�γ̱�Ų����ڣ�����˶�..."));
		else {
			CInfo c = cou.Search(i);
			CString cid, Ccredit;
			cid.Format(_T("%d"), c.id);
			Ccredit.Format(_T("%d"), c.credit);
			SetDlgItemText(IDC_EDIT2,cid);
			SetDlgItemText(IDC_EDIT3, (CString)c.name);
			SetDlgItemText(IDC_EDIT4, Ccredit);
		}
	}
}
