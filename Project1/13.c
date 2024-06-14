#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// 定义标识符常量
#define NUM 100

// 定义宏
// ADD 宏名称，(参数列表)参数无类型，宏体
#define ADD(a, b) ((a) + (b))

int Add(int a, int b)
{
	return a + b;
}

int main()
{
	// int i = NUM;
	// int arr[NUM] = {0};

	int a = 10;
	int b = 20;
	int c = ADD(a, b);

	printf("c = %d\n", c); // 添加打印语句验证结果

	return 0;
}
