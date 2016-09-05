// ADD_STUDENT.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "LAB.h"
#include "ADD_STUDENT.h"
#include "afxdialogex.h"
#include"student.h"


// ADD_STUDENT �Ի���

IMPLEMENT_DYNAMIC(ADD_STUDENT, CDialogEx)

ADD_STUDENT::ADD_STUDENT(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_ADD_STUDENT, pParent)
{

}

ADD_STUDENT::~ADD_STUDENT()
{
}

void ADD_STUDENT::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(ADD_STUDENT, CDialogEx)
	ON_BN_CLICKED(IDOK, &ADD_STUDENT::OnBnClickedOk)
	ON_BN_CLICKED(IDCANCEL, &ADD_STUDENT::OnBnClickedCancel)
END_MESSAGE_MAP()




void ADD_STUDENT::OnBnClickedOk()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CString id, name, NJ, major;
	Student st;
	GetDlgItem(IDC_SID)->GetWindowText(id);
	GetDlgItem(IDC_SNAME)->GetWindowText(name);
	GetDlgItem(IDC_SNJ)->GetWindowText(NJ);
	GetDlgItem(IDC_MAJOR)->GetWindowText(major);
	UpdateData(TRUE);
	if (id == "\0" || name == "\0" || NJ == "\0" || major == "\0")
		MessageBox(_T("��������������Ϣ��"));
	if (st.IsExist(_ttoi(id))) {
		MessageBox(_T("��ѧ���Ѿ����ڣ�"));
		return;
	}
	else {
		USES_CONVERSION;
		//���ú�����T2A��W2A��֧��ATL��MFC�е��ַ�ת��
		int sid = _ttoi(id);
		char * sname = T2A(name);
		char*sNJ = T2A(NJ);
		char*smajor = T2A(major);
		StInfo s;
		s.id = sid;
		strcpy(s.name, sname);
		strcpy(s.NJ, sNJ);
		strcpy(s.major, smajor);
		st.Add(s);
		MessageBox(_T("��ӳɹ���"));
	}
}


void ADD_STUDENT::OnBnClickedCancel()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CDialogEx::OnOK();
}
