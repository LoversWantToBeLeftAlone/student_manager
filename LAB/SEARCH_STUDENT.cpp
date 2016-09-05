// SEARCH_STUDENT.cpp : ʵ���ļ�
// 
#include "stdafx.h"
#ifndef _UNICODE  
#define _UNICODE            //ʹ��UNICODE����  
#endif  
#include "LAB.h"
#include "SEARCH_STUDENT.h"
#include "afxdialogex.h"
#include "student.h"
#include<vector>

// SEARCH_STUDENT �Ի���

IMPLEMENT_DYNAMIC(SEARCH_STUDENT, CDialogEx)

SEARCH_STUDENT::SEARCH_STUDENT(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_SEARCH_STUDENT, pParent)
{

}

SEARCH_STUDENT::~SEARCH_STUDENT()
{
}

void SEARCH_STUDENT::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(SEARCH_STUDENT, CDialogEx)
	ON_BN_CLICKED(IDOK, &SEARCH_STUDENT::OnBnClickedOk)
END_MESSAGE_MAP()


// SEARCH_STUDENT ��Ϣ�������


void SEARCH_STUDENT::OnBnClickedOk()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CString id = _T("");
	GetDlgItem(IDC_EDIT1)->GetWindowText(id);//��ȡ�ı�������
	if (id.IsEmpty())
		MessageBox(_T("������ѧ�ţ�"));
	else {
		StInfo s;
		int cid = _ttoi(id);
		Student st;
		if (!st.IsExist(cid))
			MessageBox(_T("ѧ�Ų����ڣ���˶�..."));
		else {
			s = st.Search(cid);
			SetDlgItemText(IDC_EDIT3, (CString)s.name);//�����ı�������
			SetDlgItemText(IDC_EDIT2, (CString)s.NJ);
			SetDlgItemText(IDC_EDIT4, (CString)s.major);
		}
	}
}
