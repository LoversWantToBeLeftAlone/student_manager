#include"stdafx.h"
#include"SC.h"
Register::Register() {
	FILE *fp = fopen("D:\\data\\lab2\\SC.txt", "r");
	if (fp == NULL)
		cout << "文件为空，打开失败！" << endl;
	while (1) {
		int a, b;
		fscanf(fp, "%d %d", &a, &b);
		cout << a << "," << b << endl;
		if (feof(fp))
			break;
		SC[a].push_back(b);
		CS[b].push_back(a);
	}
	fclose(fp);
}
Register::~Register() {
}
void Register::Choice(StInfo s, CInfo c) {
	SC[s.id].push_back(c.id);
	CS[c.id].push_back(s.id);
	FILE*fp = fopen("D:\\data\\lab2\\SC.txt", "a+");
	fprintf(fp, "%d %d\n", s.id, c.id);
	fclose(fp);
}
int Register::GetCourseCount(StInfo s) {
	return SC[s.id].size();
}
int Register::GetStudentCount(CInfo c) {
	return CS[c.id].size();
}
vector<int> Register::GetAllCourses(StInfo s) {
	return SC[s.id];
}
vector<int> Register::GetAllStudent(CInfo c) {
	return  CS[c.id];
}
bool Register::IsNoCourse(StInfo s) {
	return (SC[s.id].size() == 0) ? true : false;
}
bool Register::IsNoStudent(CInfo c) {
	return (CS[c.id].size() == 0) ? true : false;
}