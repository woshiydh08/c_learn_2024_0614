#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// const 修饰指针
int main(void)
{

	int a = 10;
	int b = 20;

	// const int *p 或 int const *p：
	// 这两个声明都是指针指向常量整数，你可以改变指针 p 的指向，但不能通过 p 修改所指向的整数值。
	const int *p = &a;
	*p = 20; // 不允许修改指针p 所指向的整数值
	p = &b;	 // 允许修改指针p 本身

	// int * const p：
	// 这是一个常量指针，指向整数。你不能改变 p 本身使其指向另一个地址，但可以修改 p 所指向的整数的值。

	int *const p2 = &a;
	*p2 = 20; // 允许修改指针p 所指向的整数值
	p2 = &b;	// 不允许修改指针p 本身

	return 0;
}