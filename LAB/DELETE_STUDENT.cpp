// DELETE_STUDENT.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "LAB.h"
#include "DELETE_STUDENT.h"
#include "afxdialogex.h"
#include"student.h"

// DELETE_STUDENT �Ի���

IMPLEMENT_DYNAMIC(DELETE_STUDENT, CDialogEx)

DELETE_STUDENT::DELETE_STUDENT(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DELETE_STUDENT, pParent)
{

}

DELETE_STUDENT::~DELETE_STUDENT()
{
}

void DELETE_STUDENT::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(DELETE_STUDENT, CDialogEx)
	ON_BN_CLICKED(IDOK, &DELETE_STUDENT::OnBnClickedOk)
END_MESSAGE_MAP()


// DELETE_STUDENT ��Ϣ�������


void DELETE_STUDENT::OnBnClickedOk()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
//	CDialogEx::OnOK();
	CString id;
	GetDlgItem(IDC_EDIT1)->GetWindowText(id);
	if (id.IsEmpty())
		MessageBox(_T("������ѧ��..."));
	else {
		Student st;
		int i = _ttoi(id);
		if (!st.IsExist(i))
			MessageBox(_T("��ѧ�������ڣ�"));
		else {
			st.Delete(i);
			MessageBox(_T("ɾ���ɹ���"));
		}
	}
}
