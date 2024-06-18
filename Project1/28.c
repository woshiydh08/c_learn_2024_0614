/**
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

struct Stu
{
	char name[20];
	int age;
	double score;
};

void set_stu(struct Stu *stu)
{
	// 在C语言中，结构体作为函数参数时是传值传递的，也就是说，函数内部对结构体变量的修改不会影响到外部的同名结构体变量。
	// 此处set_stu函数试图直接修改传入的stu结构体的成员，但由于是传值传递，这些修改仅限于函数内部的一个临时副本，并不会影响到在main函数中定义的stu结构体。

	// 错误写法
	// stu.name = "zhangsan";
	// stu.age = 20;
	// stu.score = 100;

	// 正确写法
	// 使用strcpy来复制字符串
	// strcpy 是 C 语言中的一个标准库函数，其全称为 "string copy"，意为“字符串复制”。
	// strcpy 的作用是将一个源字符串的内容完整地复制到另一个目标字符串中，包括结束符 \0。

	// 为什么不直接写 stu->name = "zhangsan" 呢？
	// 原因在于 stu->name 是一个字符数组（char array），而 "zhangsan" 是一个字符串字面量（string literal），它们的类型并不完全匹配。
	// 字符数组存储的是字符序列及其结束符'\0'，而字符串字面量本质上是一个指向常量字符数组的指针。
	strcpy(stu->name, "zhangsan");

	stu->age = 20;
	// stu->score = 100;
	(*stu).score = 100;
}

void print_stu(struct Stu stu)
{
	// 此处的stu是拷贝出来的, 作为读取没有问题, 但修改不会影响到函数外部的stu
	printf("%s %d %.2lf\n", stu.name, stu.age, stu.score);
}

int main(void)
{
	struct Stu stu;
	set_stu(&stu);
	printf("%s %d %.2lf\n", stu.name, stu.age, stu.score);
	return 0;
}
*/