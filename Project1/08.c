// #define _CRT_SECURE_NO_WARNINGS

// #include <stdio.h>

// // 数组

// int main(void)
// {
// 	// 数组
// 	int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

// 	printf("%d\n", a[2]);

// 	// 输出数组
// 	for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
// 	{
// 		printf("%d\n", a[i]);
// 	}

// 	/**
// 	 * 这里使用for (int i = 0; i < sizeof(a); i++)会有问题
// 	 * 代码中，使用了sizeof(a)来确定数组的大小，然后在循环中打印数组元素。
// 	 * 然而，sizeof(a)返回的是数组的总字节数，而不是数组的元素个数。
// 	 * 由于sizeof(a)是40（因为每个int占4个字节，10个int共40字节），循环会执行40次。
// 	 * 这就导致了访问数组越界，从而输出一些未定义的值或随机数据。
// 	 * 要修正这个问题，应该使用sizeof(a) / sizeof(a[0])来得到数组的元素个数。这样，循环会正确地遍历数组的每一个元素。
// 	 *
// 	 * 在修正后的代码中，sizeof(a) / sizeof(a[0]) 计算的是数组的元素个数，这里是10，因此循环会执行10次，每次正确地打印数组中的一个元素。
// 	 * 解释一下为什么这样做：
// 	 * sizeof(a)：计算数组a的总字节数，对于一个包含10个int的数组是40字节（假设int是4字节）。
// 	 * sizeof(a[0])：计算数组元素a[0]的字节数，对于一个int是4字节。
// 	 * sizeof(a) / sizeof(a[0])：计算数组的元素个数，即总字节数除以每个元素的字节数，得到数组的长度（10个元素）。
// 	 */

// 	return 0;
// }