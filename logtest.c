/*************************************************************************
	> File Name: main.cpp
	> Author: lining
	> Mail: 842549336@qq.com 
	> Created Time: 2021年01月14日 星期四 00时38分24秒
 ************************************************************************/

#include <stdio.h>

#include "log.h"


void test()
{
	WARNING("this is a warning!");
}

int main()
{
	ERROR("this is a error!");
	test();
	
	int a = 1;
	int b = 2;
	int c = a + b;
	c = c-1;

	LOG("this is a log!");

	//printf("hello world!");
	return 0;
}
