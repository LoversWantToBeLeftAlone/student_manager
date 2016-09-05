#include"stdafx.h"
#include"course_manager.h"
Course::Course() {
	FILE *fp = fopen("D:\\data\\lab2\\courseinfo.txt", "r");
	if (fp == NULL)
		cout << "文件不存在" << endl;
	CInfo s;
	int index = 0;
	while (1) {
		fscanf(fp, "%d %s %d", &s.id, s.name, &s.credit);
		if (feof(fp))
			break;
		CNode *p = new CNode;
		p->info = s;
		if (h == NULL) {
			h = p;
			p->next = NULL;
		}
		CNode*q = h;
		while (q->next != NULL)
			q = q->next;
		q->next = p;
		p->next = NULL;
	}
	fclose(fp);
}
Course::~Course() {

}
bool Course::IsExist(int id) {
	for (CNode*p = h;p != NULL;p = p->next)
		if (p->info.id == id)
			return true;
	return false;
}
void Course::Add(CInfo st) {
	CNode *p = new CNode;
	p->info.id = st.id;
	strcpy(p->info.name, st.name);
	p->info.credit = st.credit;
	p->next = h;//插入表头
	h = p;
	FILE *fp = fopen("D:\\data\\lab2\\courseinfo.txt", "a+");
	if (fp == NULL) {
		cout << "文件不存在！" << endl;
	}
	fprintf(fp, "%d %s %d\n", st.id, st.name, st.credit);
	fclose(fp);
}
CInfo Course::Search(int id) {
	CInfo result;
	for (CNode*p = h;p != NULL;p = p->next) {
		if (p->info.id == id) {
			result.id = id;
			strcpy(result.name, p->info.name);
			result.credit = p->info.credit;
		}
	}
	return result;
}
void Course::Modify(int id, CInfo st) {
	for (CNode*p = h;p != NULL;p = p->next) {
		if (p->info.id == id) {
			strcpy(p->info.name, st.name);
			p->info.credit = st.credit;
		}
	}
	FILE *fp = fopen("D:\\data\\lab2\\courseinfo.txt", "w");
	if (fp == NULL) {
		cout << "文件不存在！" << endl;
	}
	for (CNode *p = h;p != NULL;p = p->next) {
		fprintf(fp, "%d %s %d\n", p->info.id, p->info.name, p->info.credit);
	}
	fclose(fp);
}
void Course::Delete(int id) {
	CNode*p = h;
	int i = 0;
	for (CNode*p = h;p != NULL;p = p->next) {
		i++;
		if (p->info.id == id) break;
	}
	if (i == 1) {
		CNode*p = h;
		h = h->next;
		delete  p;
	}
	else {
		CNode*p = h;
		int j = 1;
		while (j < i - 1) {
			if (p->next == NULL)break;
			p = p->next;
			j++;
		}
		if (p->next != NULL) {
			CNode *q = p->next;
			p->next = q->next;
			delete q;
		}
		else {
			cout << "不存在" << endl;
		}
	}
	FILE *fp = fopen("D:\\data\\lab2\\courseinfo.txt", "w");
	if (fp == NULL) {
		cout << "文件不存在！" << endl;
	}
	for (CNode *p = h;p != NULL;p = p->next) {
		fprintf(fp, "%d %s %d\n", p->info.id, p->info.name, p->info.credit);
	}
	fclose(fp);
	
}