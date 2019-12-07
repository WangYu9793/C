#include <stdio.h>
#include "Contact.h"
#include <string.h>

void ShowContact(pContact pc){
	int i = 0;
	printf("%10s\t%5s\t%5s\t%12s\t%12s\t\n", "name", "age", "sex", "tele", "addr");
	for (i = 0; i < pc->sz; i++){
		printf("%10s\t%5d\t%5s\t%12s\t%12s\t\n", pc->data[i].name,
			pc->data[i].age,
			pc->data[i].sex,
			pc->data[i].tele,
			pc->data[i].addr);
	}
}
void InitContact(pContact pc){
	pc->sz = 0;
	memset(pc->data, 0, sizeof(pc->data));
}
void AddContact(pContact pc){
	if (pc->sz >= MAX){
		printf("ͨѶ¼�������޷������µ���ϵ��");
		return;
	}
	    printf("���������֣�");
		scanf_s("%s", pc->data[pc->sz].name);
		printf("���������䣺");
		scanf_s("%s", pc->data[pc->sz].age);
		printf("�������Ա�");
		scanf_s("%s", pc->data[pc->sz].sex);
		printf("������绰��");
		scanf_s("%s", pc->data[pc->sz].tele);
		printf("�������ַ��");
		scanf_s("%s", pc->data[pc->sz].addr);
		pc->sz++;
}
int Find(pContact pc, char name[]){
	int i = 0;
	for (i = 0; i < pc->sz; i++){
		if (strcmp(pc->data[i].name, name) == 0){
			return i;
		}
	}
	return -1;
}
void DelContact(pContact pc){
	char name[NAME_MAX] = { 0 };
	int i = 0;
	int pos = 0;
	if (pc->sz == 0){
		printf("ͨѶ¼Ϊ�գ��޷�ɾ��\n");
		return;
	}
	printf("������Ҫɾ���˵����֣�");
		scanf_s("%s", name);
	pos = Find(pc, name);
	if (i == pc->sz){
		printf("Ҫɾ�����˲�����");
	}
	for (pos = i; pos < pc->sz - 1; pos++){
		pc->data[pos] = pc->data[pos + 1];
	}
	pc->sz--;
}

int SearchContact(pContact pc){
	int pos = 0;
	char name[NAME_MAX] = { 0 };
	printf("������Ҫ������ϵ�˵����֣�");
		scanf_s("%S", name);
	pos = Find(pc, name);
	if (pos == -1){

		printf("Ҫ���ҵ���ϵ�˲�����\n");
		return -1;
	}
	else{
		printf("%10s\t%5d\t%5s\t%12s\t%12s\t\n", pc->data[pos].name,
			pc->data[pos].age,
			pc->data[pos].sex,
			pc->data[pos].tele,
			pc->data[pos].addr);
		return pos;
	}
}
void ModdifyContact(pContact pc)//�޸���ϵ�˵���Ϣ
{
	int ret = SearchContact(pc);
	if (ret != -1)
	{
		printf("������Ҫ�޸���ϵ�˵���Ϣ:>");
		printf("�������޸ĵ�����:>");
		scanf_s("%s", pc->data[ret].name);
		printf("�������޸ĵ�����:>");
		scanf_s("%d", &pc->data[ret].age);
		printf("�������޸ĵ��Ա�:>");
		scanf_s("%s", pc->data[ret].sex);
		printf("�������޸ĵĵ绰:>");
		scanf_s("%s", pc->data[ret].tele);
		printf("�������޸ĵĵ�ַ:>");
		scanf_s("%s", pc->data[ret].addr);
	}
	else
	{
		printf("�޷��޸�\n");
	}
}
void sort_contact(pContact pc)//����������������ϵ�� 
{
	int i = 0;
	int j = 0;
	for (i = 0; i < pc->sz; i++)//ð�ݷ�����
	{
		for (j = 0; j < pc->sz - 1 - i; j++)
		{
			if (strcmp(pc->data[j].name, pc->data[j + 1].name)>0)
			{
				PeoInfo tmp = pc->data[j];
				pc->data[j] = pc->data[j + 1];
				pc->data[j + 1] = tmp;
			}
		}

	}
}
void ClearContact(pContact pc)// ���������ϵ�� 
{
	pc->sz = 0;
	printf("�����ͨѶ¼\n");
}
