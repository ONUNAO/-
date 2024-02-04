#define _CRT_SECURE_NO_WARNINGS 1
#define MAX 1001
#define MAX_name 20
#define MAX_sex 4
#define MAX_tele 12
#define MAX_addr 20

#include <stdio.h>
#include <string.h>
enum Option {
	exit,
	add,
	del,
	search,
	revise,
	show,
	sort
};
struct peoinfo
{
	char name[MAX_name];
	int age;
	char sex[MAX_sex];
	char tele[MAX_tele];
	char addr[MAX_addr];
};
struct contacts {
	struct peoinfo data[MAX];
	int size;
};
//��������
//��ʼ��
void Initialize(struct contacts* ps);
//����
void Addcontacts(struct contacts* ps);
//��ʾ
void Showcontacts(const struct contacts* ps);
//ɾ��
void Delcontacts(struct contacts* ps);
//����
void Searchcontacts(struct contacts* ps);
//�޸�
void Revisecontacts(struct contacts* ps);
//����
void Sortcontacts(struct contacts* ps);
