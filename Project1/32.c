#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// 野指针
int main(void)
{
	// int *p;
	// p没有初始化, 就意味着没有明确的指向

	// *p = 10;
	// 1. 非法访问内存, 这里的p就是野指针

	// 2. 越界访问
	int arr[10] = {0};
	int *p = arr;
	for (int i = 0; i < 10; i++)
	{
		*p = i;
		p++;
	}

	// 3. 指针指向空间释放

	// 如何避免野指针

	// 1. 初始化空指针
	int *p = NULL;
	if (p != NULL)
	{
		*p = 10;
	}

	return 0;
}