#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	// 向内存申请4个字节的内存空间存储10
	int a = 10;

	// p 指针变量
	int *p = &a;

	// 解引用
	*p = 100;

	printf("p = %d\n", p);
	printf("*p = %d\n", *p);
	// 指针变量的大小取决于地址的大小
	//
	// 32位系统：由于内存地址总线是32位，因此在32位系统上，一个指针变量通常占用4个字节（32位）的空间。
	// 64位系统：而在64位系统上，为了支持更大的内存地址空间，一个指针变量通常会占用8个字节（64位）的空间。
	printf("%zu\n", sizeof(char *));

	return 0;
}