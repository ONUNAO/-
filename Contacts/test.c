#include "Contacts.h"
void menu() {
	printf("*******************************\n");
	printf("******* 1.add    2.del    ******\n");
	printf("******* 3.search 4.revise ******\n");
	printf("******* 5.show   6.sort   ******\n");
	printf("******* 0.exit           *******\n");
	printf("********************************\n");
}
int main() {
	int input = 0;
	//����
	struct contacts con;
	//��ʼ��
	Initialize(&con);
	do {
		menu();
		printf("��ѡ��:>");
		scanf("%d",&input);
		switch (input) {
			case exit:
				printf("���˳�\n");
				break;
			case add:
				Addcontacts(&con);
				break;
			case del:
				Delcontacts(&con);
				break;
			case search:
				Searchcontacts(&con);
				break;
			case revise:
				Revisecontacts(&con);
				break;
			case show:
				Showcontacts(&con);
				break;
			case sort:
				Sortcontacts(&con);
				break;
			default:
				printf("�����������������\n");
				break;
		}
	} while (input);
	return 0;
}