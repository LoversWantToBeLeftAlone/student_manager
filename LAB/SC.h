#pragma once
#include"stdafx.h"
#include"course_manager.h"
#include"student.h"
#include<vector>
#include<map>
class Register {
	map<int, vector<int>>SC;
	map<int, vector<int>>CS;
public:
	Register();
	~Register();
	void Choice(StInfo s, CInfo c);//sѡ��c���ſ�
	int GetCourseCount(StInfo s);//s��ѡ����
	int GetStudentCount(CInfo c);//ѡ��c���ſε�������
	vector<int> GetAllCourses(StInfo s);//��ȡѡ������пγ�
	vector<int> GetAllStudent(CInfo c);//��ȡѡ���ſε�����ѧ��
	bool IsNoCourse(StInfo s);//����ѧ��s�Ƿ�ûѡ��
	bool IsNoStudent(CInfo c);//�����Ƿ�û��ѡ��c
};
