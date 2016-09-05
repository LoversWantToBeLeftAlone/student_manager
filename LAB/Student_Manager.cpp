// Student_Manager.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "LAB.h"
#include "Student_Manager.h"
#include "afxdialogex.h"
#include"ADD_STUDENT.h"
#include"DELETE_STUDENT.h"
#include"MODIFY_STUDENT.h"
#include"SEARCH_STUDENT.h"
#include"student.h"
#include"SHOWALLSTUDENT.h"
#include"REGISTERINFO.h"

// Student_Manager �Ի���

IMPLEMENT_DYNAMIC(Student_Manager, CDialogEx)

Student_Manager::Student_Manager(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_STUDENT, pParent)
{

}

Student_Manager::~Student_Manager()
{
}

void Student_Manager::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Student_Manager, CDialogEx)
	ON_BN_CLICKED(IDC_ADD_STUDENT, &Student_Manager::OnBnClickedAddStudent)
	ON_BN_CLICKED(IDC_DELETE_STUDENT, &Student_Manager::OnBnClickedDeleteStudent)
	ON_BN_CLICKED(IDC_MODIFY_STUDENT, &Student_Manager::OnBnClickedModifyStudent)
	ON_BN_CLICKED(IDC_SEARCH_STUDENT, &Student_Manager::OnBnClickedSearchStudent)
	ON_BN_CLICKED(IDC_BUTTON2, &Student_Manager::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON1, &Student_Manager::OnBnClickedButton1)
END_MESSAGE_MAP()


// Student_Manager ��Ϣ�������


void Student_Manager::OnBnClickedAddStudent()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	ADD_STUDENT dlg;
	dlg.DoModal();
}


void Student_Manager::OnBnClickedDeleteStudent()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	DELETE_STUDENT dlg;
	dlg.DoModal();
}


void Student_Manager::OnBnClickedModifyStudent()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	MODIFY_STUDENT dlg;
	dlg.DoModal();
}


void Student_Manager::OnBnClickedSearchStudent()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	SEARCH_STUDENT dlg;
	dlg.DoModal();
}


void Student_Manager::OnBnClickedButton2()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	//����ѧ����Ϣ
	SHOWALLSTUDENT dlg;
	dlg.DoModal();


}


void Student_Manager::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	//�鿴ѡ�����
	REGISTERINFO dlg;
	dlg.DoModal();
	
}
