/*************************************************************************
	> File Name: shellsort.c
	> Author: lining
	> Mail: 842549336@qq.com 
	> Created Time: 2021年01月15日 星期五 01时07分16秒
 ************************************************************************/

#include <stdio.h>

#include "../log.h"

void shellsort(int* arr, int n)
{
	// 使用折半的分组序列
	int gap = n/2;
	while(gap > 0)
	{
		// i前面的部分为所有分组的第一个值
		for(int i = gap; i < n; i++)
		{

			int j = i;
			while(j > gap - 1)
			{
				if(arr[j] < arr[j - gap])
				{
					SWAP(arr[j], arr[j - gap]);
					j -= gap;
				}
				else
				{
					break;
				}
			}			
		}
		gap /= 2;
	}

}
