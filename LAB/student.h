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
	void Add(StInfo st);//���ѧ��
	void Delete(int id);//ɾ��ѧ��
	bool IsExist(int id);//ѧ���Ƿ��Ѿ�����
	void Modify(int id, StInfo st);//��st�滻ѧ��Ϊid��ѧ��
	StInfo Search(int id);//����
	Node* GetAll() {
		return h;
	}
};