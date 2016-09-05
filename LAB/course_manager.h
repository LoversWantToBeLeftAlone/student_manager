#include"stdafx.h"
#include<iostream>
using namespace std;
struct CInfo {
	int id;
	char name[50];
	int credit;
};
struct CNode {
	CInfo info;
	CNode *next;
};
class Course {
	CNode *h;
public:
	Course();
	~Course();
	void Add(CInfo st);//添加学生
	void Delete(int id);//删除学生
	bool IsExist(int id);//学生是否已经存在
	void Modify(int id, CInfo st);//用st替换学号为id的学生
	CInfo Search(int id);//查找
	CNode* GetAll() {
		return h;
	}
};