/**
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// 使用按位操作符交换变量

// 3^3 = 0 -> a^a = 0
// 011
// 011
// 000

// 0^5 = 5 -> 0^a = a
// 000
// 101
// 101

// 3^3^5 = 5
// 3^5^3 = 5
// 异或操作符支持交换律

int main(void)
{
	int a = 5, b = 3;

	printf("before change：a = %d, b = %d \n", a, b);
	a = a ^ b; // a = 3^5
	b = a ^ b; // b = 3^5^5 --> b = 3
	a = a ^ b; // a = 3^5^3 --> a = 5
	printf("after change：a = %d, b = %d \n", a, b);
	return 0;
}
*/