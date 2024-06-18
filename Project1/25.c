/**
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
// 实现函数, 求一个整数存储在内存中的二进制的1的个数
int count_ones(int num)
{
	int count = 0;
	while (num)
	{
		if (num & 1)
		{
			count++;
		}
		num >>= 1;
	}
	return count;
}

int main(void)
{
	int num = 0;
	printf("请输入一个整数:");
	scanf("%d", &num);
	printf("The number of 1s in the binary of this integer is %d\n", count_ones(num));

	return 0;
}
*/