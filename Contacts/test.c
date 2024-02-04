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
	//创建
	struct contacts con;
	//初始化
	Initialize(&con);
	do {
		menu();
		printf("请选择:>");
		scanf("%d",&input);
		switch (input) {
			case exit:
				printf("已退出\n");
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
				printf("输入错误，请重新输入\n");
				break;
		}
	} while (input);
	return 0;
}