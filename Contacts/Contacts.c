#include "Contacts.h"

//遍历是否有此人
int FindByName(struct contacts* ps, char name[MAX_name]) {
	int i = 0;
	for (i; i < ps->size; i++) {
		if (0 == strcmp(ps->data[i].name, name)) {
			return i;
		}
	}
	return -1;
}
void Initialize(struct contacts *ps) {
	memset(ps->data, 0, sizeof(ps->data));
	ps->size = 0;
}
void Addcontacts(struct contacts* ps) {
	if (ps->size == MAX) {
		printf("通讯录已满\n");
	}
	else {
		printf("请输入名字：");
		scanf("%s", ps->data[ps->size].name);
		printf("请输入年龄：");
		scanf("%d", &(ps->data[ps->size].age));
		printf("请输入性别：");
		scanf("%s", ps->data[ps->size].sex);
		printf("请输入电话：");
		scanf("%s", ps->data[ps->size].tele);
		printf("请输入地址：");
		scanf("%s", ps->data[ps->size].addr);
		ps->size++;
		printf("添加成功\n");
	}
}
void Showcontacts(const struct contacts* ps) {
	printf("%-20s\t%-4s\t%-4s\t%-12s\t%-20s\n","姓名" ,"年龄", "性别","电话","地址");
	for (int i = 0; i < ps->size; i++) {
		printf("%-20s\t%-4d\t%-4s\t%-12s\t%-20s\n", 
			ps->data[i].name,
			ps->data[i].age,
			ps->data[i].sex,
			ps->data[i].tele,
			ps->data[i].addr);
	}
}
void Delcontacts(struct contacts* ps) {
	char name[MAX_name];
	printf("请输入删除人名字:>");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	/*int i = 0;
	for (i; i < ps->size; i++) {
		if (0 == strcmp(ps->data[i].name, name)) {
			break;
		}
	}*/
	if (-1 == pos) {
		printf("此人不存在\n");
	}
	else {
		int j = 0;
		for (j; j < ps->size - 1; j++) {
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("删除成功\n");
	}
}

void Searchcontacts(struct contacts* ps) {
	char name[MAX_name];
	printf("请输入查找人名字:>");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (-1 == pos) {
		printf("查无此人\n");
	}
	else {
		printf("%-20s\t%-4s\t%-4s\t%-12s\t%-20s\n", "姓名", "年龄", "性别", "电话", "地址");
			printf("%-20s\t%-4d\t%-4s\t%-12s\t%-20s\n",
				ps->data[pos].name,
				ps->data[pos].age,
				ps->data[pos].sex,
				ps->data[pos].tele,
				ps->data[pos].addr);
	}
}
void Revisecontacts(struct contacts* ps) {
	char name[MAX_name];
	printf("请输入要修改的名字: ");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (-1 == pos) {
		printf("此人不存在\n");
	}
	else {
		printf("请输入名字：");
		scanf("%s", ps->data[pos].name);
		printf("请输入年龄：");
		scanf("%d", &(ps->data[pos].age));
		printf("请输入性别：");
		scanf("%s", ps->data[pos].sex);
		printf("请输入电话：");
		scanf("%s", ps->data[pos].tele);
		printf("请输入地址：");
		scanf("%s", ps->data[pos].addr);
		printf("修改成功\n");
	}
}
//里面被清空了
void Sortcontacts(struct contacts* ps) {
	int a = 1001;
	for (int j = 0; j < ps->size-1; j++) {
		int i = 1;
		for (i; i < j; i++) {
			if (ps->data[i].age > ps->data[i + 1].age) {
				ps->data[ps->size-1] = ps->data[i];
				ps->data[i] = ps->data[i+1];
				ps->data[i + 1] = ps->data[ps->size - 1];
			}
		}
	}
	printf("排列完成\n");
}
