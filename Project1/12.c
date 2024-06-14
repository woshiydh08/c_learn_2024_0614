#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void test(void)
{
	// 这里如果不加static修饰符, 则每次调用test函数都会初始化i的值为0
	// static 修饰局部变量的时候, 局部变量出了作用域也不销毁
	// 本质上 static修饰局部变量的时候, 改变了变量的存储位置
	static int i = 0;
	printf("%d\n", i);
	i++;
}

extern int add(int a, int b);

int main(void)
{
	// static关键字
	// 在C语言中, static关键字是用来修饰变量和函数的

	// int i = 0;
	// while (i < 10)
	// {
	// 	test();
	// 	i++;
	// }

	printf("%d\n", add(1, 2));

	return 0;
}