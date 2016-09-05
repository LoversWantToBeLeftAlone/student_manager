// COURSE.cpp : 实现文件
//

#include "stdafx.h"
#include "LAB.h"
#include "COURSE.h"
#include "afxdialogex.h"
#include"ADD_COURSE.h"
#include"DELETE_COURSE.h"
#include"MODIFY_COURSE.h"
#include"SEARCH_COURSE.h"
//#include"SHOWALLS.h"
#include"REGISTERINFO.h"
#include"SHOWALLCOURSE.h"
// COURSE 对话框

IMPLEMENT_DYNAMIC(COURSE, CDialogEx)

COURSE::COURSE(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_COURSE, pParent)
{

}

COURSE::~COURSE()
{
}

void COURSE::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(COURSE, CDialogEx)
	ON_BN_CLICKED(IDC_ADD_COURSE, &COURSE::OnBnClickedAddCourse)
	ON_BN_CLICKED(IDC_DELETE_COURSE, &COURSE::OnBnClickedDeleteCourse)
	ON_BN_CLICKED(IDC_DODIFY_COURSE, &COURSE::OnBnClickedDodifyCourse)
	ON_BN_CLICKED(IDC_MODIFY_COURSE, &COURSE::OnBnClickedModifyCourse)
	ON_BN_CLICKED(IDC_BUTTON1, &COURSE::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &COURSE::OnBnClickedButton2)
END_MESSAGE_MAP()


// COURSE 消息处理程序


void COURSE::OnBnClickedAddCourse()
{
	// TODO: 在此添加控件通知处理程序代码
	ADD_COURSE dlg;
	dlg.DoModal();
}


void COURSE::OnBnClickedDeleteCourse()
{
	// TODO: 在此添加控件通知处理程序代码
	DELETE_COURSE dlg;
	dlg.DoModal();
}



void COURSE::OnBnClickedDodifyCourse()
{
	// TODO: 在此添加控件通知处理程序代码
	MODIFY_COURSE modify_dlg;
	modify_dlg.DoModal();

}



void COURSE::OnBnClickedModifyCourse()
{
	// TODO: 在此添加控件通知处理程序代码
	SEARCH_COURSE search_dlg;
	search_dlg.DoModal();
}


void COURSE::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	//选修情况查看
	REGISTERINFO dlg;
	dlg.DoModal();

}
void COURSE::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	//导出所有内容
	SHOWALLCOURSE dlg;
	dlg.DoModal();
}
