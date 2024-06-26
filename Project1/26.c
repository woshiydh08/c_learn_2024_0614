/**
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// 单目操作符

// 封装函数, 把第N位(起始为0)的值变为1
int set_bit(int a, int n)
{
	// 0000000 0000000 0000000 00000011
	return a | (1 << n);
}

// 封装函数, 把第N位(起始为0)的值变为0
int clear_bit(int a, int n)
{
	// 0000000 0000000 0000000 00000011
	return a & ~(1 << n);
}

int main(void)
{
	int a = 10;
	int n = sizeof(a); // 计算的是a所占内存的大小, 单位是字节

	// 按位取反
	int b = 3;
	// 0000000 0000000 0000000 00000011
	// 按位取反 => 输出的是补码
	// 1111111 1111111 1111111 11111100
	// 1111111 1111111 1111111 11111011
	// 1000000 0000000 0000000 00000100

	// -4

	printf("~a = %d\n", ~a);

	int c = 13;
	// 0000000 0000000 0000000 00001101

	// 把第1位(起始为0)的值变为1
	int d = c | (1 << 1);
	// 0000000 0000000 0000000 00001111
	printf("c | (1 << 1) = %d\n", d);

	// 把第1位(起始为0)的值变为0
	int e = d & ~(1 << 1);
	// 0000000 0000000 0000000 00001101
	printf("d & ~(1 << 1) = %d\n", e);

	return 0;
}
*/