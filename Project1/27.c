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

	// 数组
	int arr[10] = {0};
	// 访问arr[7]等同于 *(arr+7) 等同于 *(7+arr) 等同于 7[arr]

	return 0;
}