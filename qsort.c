#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <string.h>

struct Stu
{
	char name[20];
	int age;
};

int cmp_stu_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

int cmp_stu_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name,((struct Stu*)e2)->name);
}

int cmp_float(const void* e1, const void* e2)
{
	return (int)(*(float*)e1 - *(float*)e2);
}

void test3()
{
	struct Stu s[3] = { {"zhangsan",20},{"lisi",10},{"wangwu",30} };
	int sz = sizeof(s) / sizeof(s[0]);

	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
}


void test2()
{
	float f[] = { 11.0,21.0,33.0,44.0,25.0,16.0,17.0,28.0 };
	int sz = sizeof(f) / sizeof(f[0]);
	qsort(f, sz, sizeof f[0], cmp_float);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%f ", f[i]);
	}
}


int main()
{
	test2();
	return 0;
}
