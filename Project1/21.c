#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// 冒泡数组排序
// 数组传参时，形参有2种写法
// 1. 数组
// 2. 指针
static void bubble_sort(int arr[], int len)
{
	int i, j;
	int temp;
	for (i = 0; i < len - 1; i++)
	{
		for (j = 0; j < len - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main(void)
{
	// 不完全初始化，剩余的元素初始化为0
	int arr[10] = {1, 2, 3};
	int arr1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	char ch1[10] = {'a', 'b', 'c'};
	char ch2[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
	char ch3[10] = "abc";
	char ch4[] = {'a'};

	// 二维数组
	int arr2[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
	// 行 数可以省略
	int arr3[][2] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

	// 三维数组
	int arr4[2][3][4] = {
			1,
			2,
			3,
			4,
			5,
			6,
			7,
			8,
			9,
			10,
			11,
			12,
			13,
			14,
			15,
			16,
			17,
			18,
			19,
			20,
			21,
			36,
	};

	// 数组名确实能表示首元素地址
	// 但又2个例外
	// 1. sizeof(数组名)，这里的数组名表示整个数组，计算的是整个数组的大小，单位是字节
	// 2. &数组名，这里的数组名表示整个数组，计算整个数组的地址

	printf("(arr) = %p\n", (arr));
	printf("(arr) = %p\n", (arr + 1)); // +4

	printf("---------------------------\n");
	printf("(&arr[0]) = %p\n", (&arr[0]));
	printf("(&arr[0]) = %p\n", (&arr[0] + 1)); // +4
	printf("---------------------------\n");

	printf("(&arr) = %p\n", (&arr));
	printf("(&arr) = %p\n", (&arr + 1)); // +40
	printf("---------------------------\n");

	return 0;
}