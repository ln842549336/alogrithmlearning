/*************************************************************************
	> File Name: test.c
	> Author: lining
	> Mail: 842549336@qq.com 
	> Created Time: 2021年01月14日 星期四 06时34分31秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#include "../log.h"
#include "bubblesort.h"

#define ARR_SIZE 50


__attribute__((constructor))
void resetRandom()
{
	srand((unsigned int)(time(NULL)));
}

int* getRandData(int n)
{
	int* arr = (int*)malloc(sizeof(int)*n);
	for(int i = 0; i < n; i++)
	{
		arr[i] = rand() % n;
	}

	return arr;
}

void print(int* arr)
{
	int k = 0;
	for(int i = 0; i < ARR_SIZE; i++)
	{
		printf("%-4d ", arr[i]);
		k++;
		if(k == 15)
		{
			printf("\n");
			k = 0;
		}
	}
	printf("\n");
}


int main()
{
	LOG("this is a sort test!");
	
	int* arr = getRandData(ARR_SIZE);
	LOG("data pre");
	print(arr);
	long long a = clock();	
	int flag = bubblesort(arr, ARR_SIZE);
	long long b = clock();
	if(!flag)
	{
		ERROR("ERROR");
	}
	else
	{
		LOG("bubblesort use %lldms", 1000 * (b - a)/ CLOCKS_PER_SEC);
	}
	
	LOG("data after");
	print(arr);
	free(arr);

}
