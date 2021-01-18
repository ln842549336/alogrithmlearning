/*************************************************************************
	> File Name: quicksort.h
	> Author: lining
	> Mail: 842549336@qq.com 
	> Created Time: 2021年01月18日 星期一 17时16分41秒
 ************************************************************************/

#ifndef QUICKSORT_H
#define QUICKSORT_H

// 为了适应测试框架
void quicksort(int* arr, int n);
// 实际执行快排算法
void quicksortsub(int* arr, int start, int end);


#endif  //QUICKSORT_H
