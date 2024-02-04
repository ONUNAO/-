#include "Contacts.h"

//�����Ƿ��д���
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
		printf("ͨѶ¼����\n");
	}
	else {
		printf("���������֣�");
		scanf("%s", ps->data[ps->size].name);
		printf("���������䣺");
		scanf("%d", &(ps->data[ps->size].age));
		printf("�������Ա�");
		scanf("%s", ps->data[ps->size].sex);
		printf("������绰��");
		scanf("%s", ps->data[ps->size].tele);
		printf("�������ַ��");
		scanf("%s", ps->data[ps->size].addr);
		ps->size++;
		printf("��ӳɹ�\n");
	}
}
void Showcontacts(const struct contacts* ps) {
	printf("%-20s\t%-4s\t%-4s\t%-12s\t%-20s\n","����" ,"����", "�Ա�","�绰","��ַ");
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
	printf("������ɾ��������:>");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	/*int i = 0;
	for (i; i < ps->size; i++) {
		if (0 == strcmp(ps->data[i].name, name)) {
			break;
		}
	}*/
	if (-1 == pos) {
		printf("���˲�����\n");
	}
	else {
		int j = 0;
		for (j; j < ps->size - 1; j++) {
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("ɾ���ɹ�\n");
	}
}

void Searchcontacts(struct contacts* ps) {
	char name[MAX_name];
	printf("���������������:>");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (-1 == pos) {
		printf("���޴���\n");
	}
	else {
		printf("%-20s\t%-4s\t%-4s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
	printf("������Ҫ�޸ĵ�����: ");
	scanf("%s", name);
	int pos = FindByName(ps, name);
	if (-1 == pos) {
		printf("���˲�����\n");
	}
	else {
		printf("���������֣�");
		scanf("%s", ps->data[pos].name);
		printf("���������䣺");
		scanf("%d", &(ps->data[pos].age));
		printf("�������Ա�");
		scanf("%s", ps->data[pos].sex);
		printf("������绰��");
		scanf("%s", ps->data[pos].tele);
		printf("�������ַ��");
		scanf("%s", ps->data[pos].addr);
		printf("�޸ĳɹ�\n");
	}
}
//���汻�����
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
	printf("�������\n");
}
