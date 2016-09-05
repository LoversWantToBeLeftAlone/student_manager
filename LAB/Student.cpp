#include"stdafx.h"
#include"student.h"
Student::Student() {
	FILE*fp = fopen("D:\\data\\lab2\\studentinfo.txt", "r");
	if (fp == NULL)
		cout << "文件不存在" << endl;
	StInfo s;
	int index = 0;
	while (1) {
		fscanf(fp, "%d	%s	%s	%s", &s.id, s.name, s.NJ, s.major);
		if (feof(fp))
			break;
		//	cout << s[index].name << "====" << s[index].id << endl;
		Node *p = new Node;
		p->info = s;
		if (h == NULL) {
			h = p;
			p->next = NULL;
		}
		Node*q = h;
		while (q->next != NULL)
			q = q->next;
		q->next = p;
		p->next = NULL;
	}
	fclose(fp);
}
Student::~Student() {

}
bool Student::IsExist(int id) {
	for (Node*p = h;p != NULL;p = p->next)
		if (p->info.id == id)
			return true;
	return false;
}
void Student::Add(StInfo st) {
	Node *p = new Node;
	p->info.id = st.id;
	strcpy(p->info.major, st.major);
	strcpy(p->info.NJ, st.NJ);
	strcpy(p->info.name, st.name);
	p->next = h;//插入表头
	h = p;
	FILE *fp = fopen("D:\\data\\lab2\\studentinfo.txt", "a+");
	if (fp == NULL) {
		cout << "文件不存在！" << endl;
	}
	fprintf(fp, "%d %s %s %s\n", st.id, st.name, st.NJ, st.major);
	fclose(fp);
}
StInfo Student::Search(int id) {
	StInfo result;
	for (Node*p = h;p != NULL;p = p->next) {
		if (p->info.id == id) {
			result.id = id;
			strcpy(result.major, p->info.major);
			strcpy(result.name, p->info.name);
			strcpy(result.NJ, p->info.NJ);
		}
	}
	return result;
}
void Student::Modify(int id, StInfo st) {
	for (Node*p = h;p != NULL;p = p->next) {
		if (p->info.id == id) {
			strcpy(p->info.major, st.major);
			strcpy(p->info.name, st.name);
			strcpy(p->info.NJ, st.NJ);
		}
	}
	FILE *fp = fopen("D:\\data\\lab2\\studentinfo.txt", "w");
	if (fp == NULL) {
		cout << "文件不存在！" << endl;
	}
	for (Node *p = h;p != NULL;p = p->next) {
		fprintf(fp, "%d %s %s %s\n", p->info.id, p->info.name, p->info.NJ, p->info.major);
	}
	fclose(fp);
}
void Student::Delete(int id) {
	Node*p = h;
	int i = 0;
	for (Node*p = h;p != NULL;p = p->next) {
		i++;
		if (p->info.id == id) break;
	}
	if (i == 1) {
		Node*p = h;
		h = h->next;
		delete  p;
	}
	else {
		Node*p = h;
		int j = 1;
		while (j < i - 1) {
			if (p->next == NULL)break;
			p = p->next;
			j++;
		}
		if (p->next != NULL) {
			Node *q = p->next;
			p->next = q->next;
			delete q;
		}
		else {
			cout << "不存在" << endl;
		}
	}
	FILE *fp = fopen("D:\\data\\lab2\\studentinfo.txt", "w");
	if (fp == NULL) {
		cout << "文件不存在！" << endl;
	}
	for (Node *p = h;p != NULL;p = p->next) {
		fprintf(fp, "%d %s %s %s\n", p->info.id, p->info.name, p->info.NJ, p->info.major);
	}
	fclose(fp);
}