#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// ### 1. 算术操作符
// - `+`（加）
// - `-`（减）
// - `*`（乘）
// - `/`（除）
// - `%`（取模）

int main1(void)
{
	int a = 10, b = 3;
	printf("a + b = %d\n", a + b);
	printf("a - b = %d\n", a - b);
	printf("a * b = %d\n", a * b);
	printf("a / b = %d\n", a / b);
	printf("a %% b = %d\n", a % b); // %% to print %
	return 0;
}

// ### 2. 关系操作符
// - `= = `（等于）
// - `! = `（不等于）
// - `>`（大于）
// - `<`（小于）
// - `> = `（大于等于）
// - `< = `（小于等于）

int main2(void)
{
	int a = 10, b = 20;
	printf("a == b: %d\n", a == b);
	printf("a != b: %d\n", a != b);
	printf("a > b: %d\n", a > b);
	printf("a < b: %d\n", a < b);
	printf("a >= b: %d\n", a >= b);
	printf("a <= b: %d\n", a <= b);
	return 0;
}

// ### 3. 逻辑操作符
// - `& & `（逻辑与）
// - `| | `（逻辑或）
// - `!`（逻辑非）

int main3(void)
{
	int a = 1, b = 0;
	printf("a && b: %d\n", a && b);
	printf("a || b: %d\n", a || b);
	printf("!a: %d\n", !a);
	printf("!b: %d\n", !b);
	return 0;
}

// ### 4. 位操作符
// - `&`（按位与）
// - `|`（按位或）
// - `^`（按位异或）
// - `~`（按位取反）
// - `<<`（左移）
// - `>>`（右移）

int main4(void)
{
	int a = 5, b = 3;								// a = 0101, b = 0011 in binary
	printf("a & b: %d\n", a & b);		// 0101 & 0011 = 0001
	printf("a | b: %d\n", a | b);		// 0101 | 0011 = 0111
	printf("a ^ b: %d\n", a ^ b);		// 0101 ^ 0011 = 0110
	printf("~a: %d\n", ~a);					// ~0101 = 1010 (in 32-bit system, it will show as a large negative number)
	printf("a << 1: %d\n", a << 1); // 0101 << 1 = 1010
	printf("a >> 1: %d\n", a >> 1); // 0101 >> 1 = 0010
	return 0;
}

// ### 5. 赋值操作符
// - `=`（赋值）
// - `+ = `（加后赋值）
// - `- = `（减后赋值）
// - `* = `（乘后赋值）
// - `/ = `（除后赋值）
// - `% = `（取模后赋值）
// - `& = `（按位与后赋值）
// - `| = `（按位或后赋值）
// - `^ = `（按位异或后赋值）
// - `< <= `（左移后赋值）
// - `> >= `（右移后赋值）

int main5(void)
{
	int a = 10;
	a += 5; // a = a + 5
	printf("a += 5: %d\n", a);
	a -= 3; // a = a - 3
	printf("a -= 3: %d\n", a);
	a *= 2; // a = a * 2
	printf("a *= 2: %d\n", a);
	a /= 4; // a = a / 4
	printf("a /= 4: %d\n", a);
	a %= 3; // a = a % 3
	printf("a %%= 3: %d\n", a);
	a &= 6; // a = a & 6
	printf("a &= 6: %d\n", a);
	a |= 2; // a = a | 2
	printf("a |= 2: %d\n", a);
	a ^= 1; // a = a ^ 1
	printf("a ^= 1: %d\n", a);
	a <<= 1; // a = a << 1
	printf("a <<= 1: %d\n", a);
	a >>= 1; // a = a >> 1
	printf("a >>= 1: %d\n", a);
	return 0;
}

// ### 6. 增量和减量操作符
// - `++ `（前置和后置增量）
// - `-- `（前置和后置减量）

int main6(void)
{
	int a = 10;
	printf("a++: %d\n", a++); // 后置增量，先使用a的值再增加
	printf("++a: %d\n", ++a); // 前置增量，先增加a的值再使用
	printf("a--: %d\n", a--); // 后置减量，先使用a的值再减少
	printf("--a: %d\n", --a); // 前置减量，先减少a的值再使用
	return 0;
}

// ### 7. 条件操作符（三元操作符）
// - `? :`（条件操作符）

int main7(void)
{
	int a = 10, b = 20;
	int max = (a > b) ? a : b; // 条件操作符，选择较大的值
	printf("max: %d\n", max);
	return 0;
}

// ### 8. 逗号操作符
// - `,`（逗号）

int main8(void)
{
	int a = 10, b = 20, c;
	c = (a += 5, b += 5, a + b); // 逗号操作符，依次执行多个表达式
	printf("c: %d\n", c);
	return 0;
}

// ### 9. 指针操作符
// - `*`（解引用）
// - `&`（取地址）

int main9(void)
{
	int a = 10;
	int *p = &a; // 取地址
	printf("Address of a: %p\n", p);
	printf("Value of a: %d\n", *p); // 解引用
	return 0;
}
