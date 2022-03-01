#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

int main()
{
  //打印水鲜花数
	int i = 0;
	for (i = 0; i <= 100000; i++)
	{
		int n = 1;
		int tmp = i;
		int sum = 0;

		//计算位数之和
		while (tmp /= 10)
		{
			n++;
		}
		tmp = i;
		//计算每一位的n次方之和 sum
		while (tmp)
		{
			sum += pow(tmp % 10, n);
			tmp /= 10;
		}

		if(i==sum)
		{
			printf("%d ", i);
		}
	}

	return 0;
}
