/*************************************************************************
	> File Name: bubblesort.c
	> Author: lining
	> Mail: 842549336@qq.com 
	> Created Time: 2021年01月14日 星期四 06时17分58秒
 ************************************************************************/

#include <stdio.h>

#include "bubblesort.h"
#include "../log.h"


void bubblesort(int * data, int n)
{
	if(data == NULL)
	{
		ERROR("data is null!");
		return;
	}
	
	for(int i = 0; i < n; i++)
	{
		int flag = 0;
		for(int j = 0; j < n - i - 1; j++)
		{
			if(data[j] > data[j + 1])
			{
				SWAP(data[j], data[j + 1]);
				if(!flag)
				{
					flag = 1;
				}
			}
		}
		if(!flag)
		{
			return;
		}
	}
	return;
}



