// ADD_COURSE.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "LAB.h"
#include "ADD_COURSE.h"
#include "afxdialogex.h"
#include"course_manager.h"

// ADD_COURSE �Ի���

IMPLEMENT_DYNAMIC(ADD_COURSE, CDialogEx)

ADD_COURSE::ADD_COURSE(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_ADD_COURSE, pParent)
{

}

ADD_COURSE::~ADD_COURSE()
{
}

void ADD_COURSE::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(ADD_COURSE, CDialogEx)
	ON_BN_CLICKED(IDOK, &ADD_COURSE::OnBnClickedOk)
END_MESSAGE_MAP()


// ADD_COURSE ��Ϣ�������


void ADD_COURSE::OnBnClickedOk()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
//	CDialogEx::OnOK();
	CString cid, cname,credit;
	Course C;
	GetDlgItem(IDC_CID)->GetWindowText(cid);
	GetDlgItem(IDC_CNAME)->GetWindowText(cname);
	GetDlgItem(IDC_CCREDIT)->GetWindowText(credit);
	UpdateData(TRUE);
	if (cid == "\0" || cname == "\0" || credit == "\0" )
		MessageBox(_T("��������������Ϣ��"));
	if (C.IsExist(_ttoi(cid))) {
		MessageBox(_T("�ÿγ��Ѿ����ڣ�"));
		return;
	}
	else {
		USES_CONVERSION;
		//���ú�����T2A��W2A��֧��ATL��MFC�е��ַ�ת��
		int id = _ttoi(cid);
		char * name = T2A(cname);
		int Ccredit = _ttoi(credit);
		CInfo s;
		s.id = id;
		strcpy(s.name, name);
		s.credit = Ccredit;
		C.Add(s);
		MessageBox(_T("��ӳɹ���"));
	}
}
