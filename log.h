/*************************************************************************
	> File Name: log.h
	> Author: lining
	> Mail: 842549336@qq.com 
	> Created Time: 2021年01月14日 星期四 00时11分09秒
 ************************************************************************/

#ifndef LOG_H
#define LOG_H

#include <stdio.h>
#include <stdlib.h>

// 封装颜色
#define COLOR(msg, CODE)	"\033[0;1;" #CODE ";47m" msg "\033[0m"
#define RED(msg)	COLOR(msg, 31)	
#define GREEN(msg)	COLOR(msg, 32)	
#define YELLOW(msg)	COLOR(msg, 33)	
#define BLUE(msg)	COLOR(msg, 34)	
#define TEXTCOLOR(msg) "\033[0;1;30;43m" msg "\033[0m"

#ifdef Debug

// 封装debug下日志打印
#define MSG(frm, type, color, args...)\
{\
	printf(color("[ %-7s ][%s : %s : %d]:"), #type, __FILE__, __func__, __LINE__);\
	printf(TEXTCOLOR(frm), ##args);\
	printf("\n");\
}

#define LOG(frm, args...) MSG(frm, LOG, BLUE, ##args)
#define WARNING(frm, args...) MSG(frm, WARNING, YELLOW, ##args)
#define ERROR(frm, args...) MSG(frm, ERROR, RED, ##args)
	
#else
#define LOG(frm, args...)
#define WARNING(frm, args...)
#define ERROR(frm, args...)
#endif



#endif  //LOG_H
