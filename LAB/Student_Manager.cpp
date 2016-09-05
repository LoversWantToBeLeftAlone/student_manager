// Student_Manager.cpp : 实现文件
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

// Student_Manager 对话框

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


// Student_Manager 消息处理程序


void Student_Manager::OnBnClickedAddStudent()
{
	// TODO: 在此添加控件通知处理程序代码
	ADD_STUDENT dlg;
	dlg.DoModal();
}


void Student_Manager::OnBnClickedDeleteStudent()
{
	// TODO: 在此添加控件通知处理程序代码
	DELETE_STUDENT dlg;
	dlg.DoModal();
}


void Student_Manager::OnBnClickedModifyStudent()
{
	// TODO: 在此添加控件通知处理程序代码
	MODIFY_STUDENT dlg;
	dlg.DoModal();
}


void Student_Manager::OnBnClickedSearchStudent()
{
	// TODO: 在此添加控件通知处理程序代码
	SEARCH_STUDENT dlg;
	dlg.DoModal();
}


void Student_Manager::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	//导出学生信息
	SHOWALLSTUDENT dlg;
	dlg.DoModal();


}


void Student_Manager::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	//查看选修情况
	REGISTERINFO dlg;
	dlg.DoModal();
	
}
