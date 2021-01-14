/*************************************************************************
	> File Name: test.c
	> Author: lining
	> Mail: 842549336@qq.com 
	> Created Time: 2021年01月14日 星期四 06时34分31秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#include "../log.h"
#include "bubblesort.h"
#include "selectionsort.h"

#define ARR_SIZE 50000

// 创建随机序列
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

// 打印序列
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

// 测试方法
int check(int* arr, int n)
{
	for(int i = 1; i < n; i++)
	{
		if(arr[i] < arr[i - 1]) return 0;
	}
	return 1;
}
#define TEST(func, arr, n) _TEST(func, arr, n, #func)

void _TEST(
		void(*func)(int*, int),
		int *arr,
		int n,
		const char* func_name
		)
{
	int* temp = (int*)malloc(sizeof(int)*n);
	memcpy(temp, arr, sizeof(int) * n);
//	print(temp);
	long long a = clock();
	func(temp, n);
	long long b = clock();
//	print(temp);
	if(check(temp, n))
	{
		SUCCESS("FUN:%s, total time:%lldms", func_name, 1000 * (b - a) / CLOCKS_PER_SEC);
	}
	else
	{
		FAIELD("FUN:%s execute error!", func_name);
	}

	free(temp);
	return;
}

int main()
{
	LOG("this is a sort test!");
	int* arr = getRandData(ARR_SIZE);
	TEST(bubblesort, arr, ARR_SIZE);
	TEST(selectionsort, arr, ARR_SIZE);

	int a = 12;
	int b = 12;
	SWAP(a, a);
	printf("a=%d, b=%d", a, b);


	free(arr);

}
