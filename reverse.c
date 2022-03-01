#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>
void reverse(char* arr)
{
	assert(arr);
	int len = strlen(arr);

	char* left = arr;
	char* right = arr + len - 1;

	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

int main()
{
	char arr[256] = { 0 };
	gets(arr);//读一行
	//逆序函数
	reverse(arr);
	printf("%s\n", arr);

	return 0;
}
