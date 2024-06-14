#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	// 反斜杠
	printf("This is a backslash: \\\n");

	// 双引号
	printf("This is a double quote: \"\n");

	// 单引号
	printf("This is a single quote: \'\n");

	// 换行符
	printf("This is a line break\nin the middle of the sentence.\n");

	// 制表符
	printf("Column 1\tColumn 2\tColumn 3\n");

	// 回车符
	printf("This line will be\rOverwritten from start.\n");

	// 退格符
	printf("Hello, Wo\b\b\b\b\borld!\n"); // 第一个 'o' 和后面的 'Wo' 被退格删除

	// 换页符 (在大多数现代终端中可能不会有明显效果)
	printf("First Page\fSecond Page\n");

	// 垂直制表符（在许多终端中可能不会有明显效果）
	printf("Line 1\vLine 2\n");

	// 空字符
	char str[] = "Hello\0World";
	printf("String with null character: %s\n", str); // 只会打印 "Hello" 因为 \0 表示字符串结束

	// 格式转义符

	// %d：用于打印整数。
	// %c：用于打印字符。
	// %f：用于打印浮点数。
	// %s：用于打印字符串。
	// %zu: 用于打印sizeof()函数返回值

	int num = 10;
	char ch = 'A';
	float pi = 3.14159;
	char str2[] = "Hello, World!";

	printf("Integer: %d\n", num);
	printf("Character: %c\n", ch);
	printf("Float: %f\n", pi);
	printf("String: %s\n", str2);
	printf("Size of num: %zu\n", sizeof(num));

	return 0;
}