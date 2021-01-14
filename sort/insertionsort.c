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

// 改进 不需要每次都交换
void insertionsort1(int* arr, int n)
{
	for(int i = 1; i < n; i++)
	{
		int j = i - 1;
		int temp = arr[i];
		for(; j >= 0; j--)
		{
			if(temp < arr[j])
			{
				arr[j + 1] = arr[j];
			}
			else
			{
				break;
			}
		}
		arr[j + 1] = temp;
	}

}

void insertionsort2(int* arr, int n)
{
	for(int i = 1; i < n; i++)
	{
		int j = i - 1;
		int temp = arr[i];
		while(j >= 0 && temp < arr[j])
		{
			arr[j + 1] = arr[j];
			j--;
		}

		arr[j + 1] = temp;
	}

}
