#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	// 强制类型转换
	int a = (int)3.14;
	printf("%d\n", a);

	// 字符串对比
	// 错误方法
	// if ('abc' == 'abc')

	// 正确方法
	// 使用strcmp函数
	return 0;
}