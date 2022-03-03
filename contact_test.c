#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"


//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECERT
//};
//
////联合体
//union Un
//{
//	char c;
//	int i;
//};

void menu()
{
	printf("*********************************************\n");
	printf("******* 1.add                2.del    *******\n");
	printf("******* 3.search             4.modify *******\n");
	printf("******* 5.show               6.sort   *******\n");
	printf("******* 0.exit                        *******\n");
	printf("*********************************************\n");
}

int main()
{
	//enum Sex s = MALE;
	//union Un u;
	//printf("%d\n",sizeof(u));
	//printf("%p\n", &u);
	//printf("%p\n", &(u.i));
	//printf("%p\n", &(u.c));
	int input = 0;
	struct Contact con;
	InitContact(&con);

	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			break;
		case EXIT:
			printf("quit\n");
			break;
		default:
			printf("input error\n");
			break;
		}
	} while (input);

	return 0;
}
