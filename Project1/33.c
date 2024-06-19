/**
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
// 指针运算
int main(void)
{

	// 指针加减
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
	// int *p = arr;
	// for (i = 0; i < sz; i++)
	// {
	// 	*(p + i) = 1;
	// }

	// 指针减指针
	printf("%d\n", &arr[9] - &arr[0]);
	// 打印9

	// 指针减指针, 得到的值是指针和指针之间的元素个数
	// 不是所有指针都能相减

	return 0;
}
*/