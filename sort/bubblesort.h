/*************************************************************************
	> File Name: bubblesort.h
	> Author: lining
	> Mail: 842549336@qq.com 
	> Created Time: 2021年01月14日 星期四 06时16分45秒
 ************************************************************************/

#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#define SWAP(x, y)\
{\
	x = x ^ y;\
	y = x ^ y;\
	x = x ^ y;\
}

int bubblesort(int *data, int n);

#endif  //BUBBLESORT_H
