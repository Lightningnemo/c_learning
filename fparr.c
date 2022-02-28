#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

void menu()
{
	printf("***********************\n");
	printf("** 1.加法     2.减法 **\n");
	printf("** 3.乘法     4.除法 **\n");
	printf("** 5.异或     6.退出 **\n");
	printf("***********************\n");
}

int Add(int x, int y)
{
	return x + y;
}


int Sub(int x, int y)
{
	return x - y;
}


int Mul(int x, int y)
{
	return x * y;
}


int Div(int x, int y)
{
	return x / y;
}

int Xor(int x, int y)
{
	return x ^ y;
}


int main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	int(*pfArr[])(int, int) = { 0, Add, Sub, Mul, Div, Xor };
	do
	{
		menu();
		printf("请输入:>");
		scanf("%d", &input);
		if (input >= 1 && input <= 5)
		{
			printf("请输入两个操作数:>");
			scanf("%d%d", &x, &y);
			int ret = pfArr[input](x, y);
			printf("%d\n", ret);
		}
		else if (input == 0)
		{
			printf("退出\n");
		}
		else
		{
			printf("输入错误，请重新输入\n");
		}
	} while (input);
	return 0;
}
