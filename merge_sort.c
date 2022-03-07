#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int ptr[9] = { 0 };//辅助数组

void Merge(int* arr, int low, int mid, int high)
{
	
	int i = low; 
	//将数据拷贝到辅助数组
	for (i = low; i <= high; i++)
	{
		ptr[i] = arr[i];
	}
	i = low;
	int j = 0;
	int k = 0;
	for (i = low, j = mid + 1, k = i; i <= mid && j <= high; k++)
	{
		//合并有序数组
		//将较小的元素拷贝到数组中
		if (ptr[i] <= ptr[j])
			arr[k] = ptr[i++];
		else
			arr[k] = ptr[j++];
	}
	//如果第一段未检测完，复制
	while (i <= mid) arr[k++] = ptr[i++];
	while (j <= high) arr[k++] = ptr[j++];
}


void MergeSort(int* arr, int low, int high)
{
	if (low < high)
	{
		int mid = (low + high) / 2;
		MergeSort(arr, low, mid);
		MergeSort(arr, mid + 1, high);
		Merge(arr, low, mid, high);
	}
}

int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	MergeSort(arr, 0, sz-1);
	int  i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
