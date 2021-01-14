/*************************************************************************
	> File Name: selectionsort.c
	> Author: lining
	> Mail: 842549336@qq.com 
	> Created Time: 2021年01月14日 星期四 21时11分47秒
 ************************************************************************/

#include <stdio.h>

#include "selectionsort.h"
#include "../log.h"

void selectionsort(int* arr, int n)
{
	//printf("input n = %d\n", n);
	for(int i = 0; i < n - 1; i++)
	{	
		int k = i;
		for(int j = i + 1; j < n; j++)
		{
			if(arr[j] < arr[k])
			{
				k = j;
			}
		}
		if(k != i)
		{
			SWAP(arr[i], arr[k]);
		}

		//printf("i = %d, k = %d\n", i, k);
		//printf("arr[i] = %d, arr[k] = %d\n", arr[i], arr[k]);
		//for(int t = 0; t < n; t++)
		//{
		//	printf("%d ", arr[t]);
		//}
		//printf("\n");
	}
}
