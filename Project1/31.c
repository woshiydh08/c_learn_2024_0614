#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int a = 0x11223344;

	int *pa = &a;
	char *pc = &a;

	printf("pa = %p\n", pa);
	printf("pc = %p\n", pc);

	printf("pa+1 = %p\n", pa + 1);
	printf("pc+1 = %p\n", pc + 1);

	// 结论2
	// 指针的类型决定了指针+-1的操作的时候, 跳过几个字节

	printf("*pa = %d\n", *pa);
	printf("*pc = %d\n", *pc);
	return 0;
}