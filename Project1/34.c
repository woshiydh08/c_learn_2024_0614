#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// 二级指针：指针的指针
int main(void)
{
	int a = 10;
	int *pa = &a;
	// 二级指针变量是用来存放一级指针变量的地址
	int **ppa = &pa;

	printf("%d\n", ppa);
	printf("%d\n", pa);

	int b = 20;
	int *pb = &b;

	int c = 30;
	int *pc = &c;

	// 指针数组
	int *parr[2] = {&a, pb, pc};
	return 0;
}