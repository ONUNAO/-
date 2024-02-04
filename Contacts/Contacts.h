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
//声明函数
//初始化
void Initialize(struct contacts* ps);
//增加
void Addcontacts(struct contacts* ps);
//显示
void Showcontacts(const struct contacts* ps);
//删除
void Delcontacts(struct contacts* ps);
//查找
void Searchcontacts(struct contacts* ps);
//修改
void Revisecontacts(struct contacts* ps);
//排序
void Sortcontacts(struct contacts* ps);
