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
	void Add(CInfo st);//���ѧ��
	void Delete(int id);//ɾ��ѧ��
	bool IsExist(int id);//ѧ���Ƿ��Ѿ�����
	void Modify(int id, CInfo st);//��st�滻ѧ��Ϊid��ѧ��
	CInfo Search(int id);//����
	CNode* GetAll() {
		return h;
	}
};