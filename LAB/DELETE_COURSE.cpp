// DELETE_COURSE.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "LAB.h"
#include "DELETE_COURSE.h"
#include "afxdialogex.h"
#include"course_manager.h"

// DELETE_COURSE �Ի���

IMPLEMENT_DYNAMIC(DELETE_COURSE, CDialogEx)

DELETE_COURSE::DELETE_COURSE(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DELETE_COURSE, pParent)
{

}

DELETE_COURSE::~DELETE_COURSE()
{
}

void DELETE_COURSE::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(DELETE_COURSE, CDialogEx)
	ON_BN_CLICKED(IDOK, &DELETE_COURSE::OnBnClickedOk)
END_MESSAGE_MAP()


// DELETE_COURSE ��Ϣ�������


void DELETE_COURSE::OnBnClickedOk()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
//	CDialogEx::OnOK();
	CString id;
	GetDlgItem(IDC_CID)->GetWindowText(id);
	if (id.IsEmpty())
		MessageBox(_T("������γ̱��..."));
	else {
		Course st;
		int i = _ttoi(id);
		if (!st.IsExist(i))
			MessageBox(_T("�ÿγ̲����ڣ�"));
		else {
			st.Delete(i);
			MessageBox(_T("ɾ���ɹ���"));
		}
	}
}
