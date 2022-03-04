#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Stu
{
	int n;
	int arr[];	//柔性数组成员
};

int main()
{
	struct Stu* ps = malloc(sizeof(struct Stu) + 10 * sizeof(int));
	ps->n = 100;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		ps->arr[i] = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ",ps->arr[i]);
	}
	free(ps);
	ps = NULL;
	return 0;
}
