#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// 变量的作用域
// 变量的生命周期

// 声明取自外部的符号
extern int a;

int main(void)
{

	{
		printf("a=%d\n", a);
	}


	return 0;
}