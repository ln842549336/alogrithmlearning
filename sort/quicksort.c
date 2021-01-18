/*************************************************************************
	> File Name: quicksort.c
	> Author: lining
	> Mail: 842549336@qq.com 
	> Created Time: 2021年01月18日 星期一 17时19分02秒
 ************************************************************************/

#include <stdio.h>

#include "quicksort.h"
#include "../log.h"



void quicksort(int* arr, int n)
{
	quicksortsub(arr, 0, n - 1);
}

void quicksortsub(int* arr, int start, int end)
{
	// 递归退出条件
	if(start >= end)
	{
		return;
	}

	int i = start;
	int j = end;
	int temp = arr[i];

	while(i < j)
	{
		while(i < j && arr[j] > temp) j--;
		if(i < j)
		{
			arr[i++] = arr[j];
		}
		while(i < j && arr[i] < temp) i++;
		if(i < j)
		{
			arr[j--] = arr[i];
		}
	}

	arr[i] = temp;
	quicksortsub(arr, start, i - 1);
	quicksortsub(arr, i + 1, end);
}
