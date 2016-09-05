// REGISTERINFO.cpp : 实现文件
//

#include "stdafx.h"
#include "LAB.h"
#include "REGISTERINFO.h"
#include "afxdialogex.h"
#include"SC.h"

// REGISTERINFO 对话框

IMPLEMENT_DYNAMIC(REGISTERINFO, CDialogEx)

REGISTERINFO::REGISTERINFO(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_REGISTERCOND, pParent)
{

}

REGISTERINFO::~REGISTERINFO()
{
}

void REGISTERINFO::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(REGISTERINFO, CDialogEx)
	ON_BN_CLICKED(IDOK, &REGISTERINFO::OnBnClickedOk)
END_MESSAGE_MAP()


// REGISTERINFO 消息处理程序


void REGISTERINFO::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
	//	CDialogEx::OnOK();

	int index = ((CComboBox*)GetDlgItem(IDC_RCOMBO1))->GetCurSel();
	CString choice;
	((CComboBox*)GetDlgItem(IDC_RCOMBO1))->GetLBText(index, choice);
	if (choice == "学生选课情况") {
		CString content = _T("");
		Register r;
		Student s;
		CString id;
		GetDlgItem(IDC_REDIT1)->GetWindowTextW(id);
		int j = 0;
		//		id.Format(_T("%d"), j);
		j = _ttoi(id);
		StInfo st;
		st = s.Search(j);
		if (!s.IsExist(j))
			MessageBox(_T("该学生不存在！"));
		if (r.IsNoCourse(st))
			MessageBox(_T("这个学生没选课"));
		else {
			vector<int> v = r.GetAllCourses(st);//获取这个学生选修的所有课程编号
			vector<int>::iterator it1 = v.begin();
			vector<int>::iterator it2 = v.end();
			while (it1 != it2) {
				int k = *it1;
				Course c;
				CInfo co = c.Search(k);
				CString id;
				id.Format(_T("%d"), co.id);
				content.Append(id);
				content.Append(_T("		"));
				content.Append((CString)co.name);
				CString credit;
				content.Append(_T("	"));
				credit.Format(_T("%d"), co.credit);
				content.Append(credit);
				content.Append(_T("\r\n"));
				++it1;
			}
		}
		SetDlgItemText(IDC_REDIT2, content);
	}
	if (choice == "课程选修情况") {
		CString content = _T("");
		Register r;
		Course co;
		CString id;
		GetDlgItem(IDC_REDIT1)->GetWindowTextW(id);
		int j = 0;
		//		id.Format(_T("%d"), j);
		j = _ttoi(id);
		CInfo c;
		c = co.Search(j);
		if (!co.IsExist(j))
			MessageBox(_T("这门课不存在!"));
		if (r.IsNoStudent(c))
			MessageBox(_T("这个课没人选"));
		else {
			vector<int> v = r.GetAllStudent(c);//获取这个学生选修的所有课程编号
			vector<int>::iterator it1 = v.begin();
			vector<int>::iterator it2 = v.end();
			while (it1 != it2) {
				int k = *it1;
				Student st;
			    StInfo s = st.Search(k);
				CString id;
				id.Format(_T("%d"), s.id);
				content.Append(id);
				content.Append(_T("		"));
				content.Append((CString)s.name);
				content.Append(_T("	"));
				content.Append((CString)s.NJ);
				content.Append(_T("	"));
				content.Append((CString)s.major);
				++it1;
			}
		}
		SetDlgItemText(IDC_REDIT2, content);
	}
}
