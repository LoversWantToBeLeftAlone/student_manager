#include"stdafx.h"
#include<iostream>
using namespace std;
struct StInfo {
	int id;
	char name[20];
	char NJ[20];
	char major[20];

};
struct Node {
	StInfo info;
	Node *next;
};
class Student {
	Node *h;
public:
	Student();
	~Student();
	void Add(StInfo st);//添加学生
	void Delete(int id);//删除学生
	bool IsExist(int id);//学生是否已经存在
	void Modify(int id, StInfo st);//用st替换学号为id的学生
	StInfo Search(int id);//查找
	Node* GetAll() {
		return h;
	}
};