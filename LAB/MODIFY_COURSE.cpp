// MODIFY_COURSE.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "LAB.h"
#include "MODIFY_COURSE.h"
#include "afxdialogex.h"
#include"course_manager.h"

// MODIFY_COURSE �Ի���

IMPLEMENT_DYNAMIC(MODIFY_COURSE, CDialogEx)

MODIFY_COURSE::MODIFY_COURSE(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_MODIFY_COURSE, pParent)
{

}

MODIFY_COURSE::~MODIFY_COURSE()
{
}

void MODIFY_COURSE::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(MODIFY_COURSE, CDialogEx)
	ON_BN_CLICKED(IDOK, &MODIFY_COURSE::OnBnClickedOk)
	ON_BN_CLICKED(IDC_BUTTON1, &MODIFY_COURSE::OnBnClickedButton1)
END_MESSAGE_MAP()


// MODIFY_COURSE ��Ϣ�������


void MODIFY_COURSE::OnBnClickedOk()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
//	CDialogEx::OnOK();
	CString id, name, credit;
	GetDlgItem(IDC_CID)->GetWindowText(id);
	GetDlgItem(IDC_CNAME)->GetWindowText(name);
	GetDlgItem(IDC_CCREDIT)->GetWindowText(credit);
	if (id == "\0" || name == "\0" || credit == "\0")
		MessageBox(_T("��������������Ϣ��"));
	else {
		USES_CONVERSION;
		//���ú�����T2A��W2A��֧��ATL��MFC�е��ַ�ת��
		int cid = _ttoi(id);
		char * cname = T2A(name);
		int ccredit = _ttoi(credit);
		CInfo s;
		s.id = cid;
		strcpy(s.name, cname);
		s.credit = ccredit;
		Course st;
		if (!st.IsExist(cid)) {
			MessageBox(_T("�ÿγ̲����ڣ��޷��޸ģ�"));
		}
		else {
			st.Modify(cid, s);
			MessageBox(_T("�ɹ��޸ģ�"));
		}
	}
}


void MODIFY_COURSE::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	Course cou;
	CString id;
	GetDlgItemText(IDC_CID, id);
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
			SetDlgItemText(IDC_CID, cid);
			SetDlgItemText(IDC_CNAME, (CString)c.name);
			SetDlgItemText(IDC_CCREDIT, Ccredit);
		}
	}
}
