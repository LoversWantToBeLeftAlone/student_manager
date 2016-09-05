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
	void Choice(StInfo s, CInfo c);//s选择c这门课
	int GetCourseCount(StInfo s);//s的选课数
	int GetStudentCount(CInfo c);//选择c这门课的所有人
	vector<int> GetAllCourses(StInfo s);//获取选择的所有课程
	vector<int> GetAllStudent(CInfo c);//获取选这门课的所有学生
	bool IsNoCourse(StInfo s);//看看学生s是否没选课
	bool IsNoStudent(CInfo c);//看看是否没人选择c
};
