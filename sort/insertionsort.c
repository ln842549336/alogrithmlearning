/*************************************************************************
	> File Name: insertionsort.c
	> Author: lining
	> Mail: 842549336@qq.com 
	> Created Time: 2021年01月15日 星期五 00时47分02秒
 ************************************************************************/

#include <stdio.h>

#include "insertionsort.h"
#include "../log.h"

void insertionsort(int* arr, int n)
{
	for(int i = 1; i < n; i++)
	{
		int j = i;
		while(j > 0)
		{
			if(arr[j] < arr[j - 1])
			{
				SWAP(arr[j], arr[j - 1]);
				j--;
			}
			else
			{
				break;
			}
		}
	}
}
