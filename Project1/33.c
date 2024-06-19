#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
// 指针运算
int main(void)
{
	int arr[10] = {0};
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	// 数组下标写法
	// for (i = 0; i < sz; i++)
	// {
	// 	arr[i] = 1;
	// }

	// 写法2
	// int *p = arr;
	// for (i = 0; i < sz; i++)
	// {
	// 	*p = 1;
	// 	p++;
	// }

	// 写法3
	int *p = arr;
	for (i = 0; i < sz; i++)
	{
		*(p + i) = 1;
	}

	return 0;
}