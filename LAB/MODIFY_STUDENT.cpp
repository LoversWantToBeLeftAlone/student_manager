// MODIFY_STUDENT.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "LAB.h"
#include "MODIFY_STUDENT.h"
#include "afxdialogex.h"
#include "student.h"

// MODIFY_STUDENT �Ի���

IMPLEMENT_DYNAMIC(MODIFY_STUDENT, CDialogEx)

MODIFY_STUDENT::MODIFY_STUDENT(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_MODIFY_STUDENT, pParent)
{

}

MODIFY_STUDENT::~MODIFY_STUDENT()
{
}

void MODIFY_STUDENT::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(MODIFY_STUDENT, CDialogEx)
	ON_BN_CLICKED(IDOK, &MODIFY_STUDENT::OnBnClickedOk)
	ON_BN_CLICKED(IDC_BUTTON1, &MODIFY_STUDENT::OnBnClickedButton1)
END_MESSAGE_MAP()


// MODIFY_STUDENT ��Ϣ�������


void MODIFY_STUDENT::OnBnClickedOk()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
//	CDialogEx::OnOK();
	CString id, name, NJ,major;
	GetDlgItem(IDC_EDIT1)->GetWindowText(id);
	GetDlgItem(IDC_EDIT2)->GetWindowText(name);
	GetDlgItem(IDC_EDIT3)->GetWindowText(NJ);
	GetDlgItem(IDC_EDIT4)->GetWindowText(major);
	if (id == "\0" || name == "\0" || NJ == "\0"||major=="\0")
		MessageBox(_T("��������������Ϣ��"));
	else {
		USES_CONVERSION;
		//���ú�����T2A��W2A��֧��ATL��MFC�е��ַ�ת��
		int cid = _ttoi(id);
		char * cname = T2A(name);
//		int ccredit = _ttoi(credit);
		char *cnj = T2A(NJ);
		char *cmajor = T2A(major);
		StInfo s;
		s.id = cid;
		strcpy(s.name, cname);
		strcpy(s.NJ, cnj);
		strcpy(s.major, cmajor);
		Student st;
		if (!st.IsExist(cid)) {
			MessageBox(_T("��ѧ�������ڣ��޷��޸ģ�"));
		}
		else {
			st.Modify(cid, s);
			MessageBox(_T("�ɹ��޸ģ�"));
		}
	}
}


void MODIFY_STUDENT::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
//	UpdateData(TRUE);
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
			SetDlgItemText(IDC_EDIT2, (CString)s.name);
			SetDlgItemText(IDC_EDIT3, (CString)s.NJ);
			SetDlgItemText(IDC_EDIT4, (CString)s.major);
		}
	}
}
