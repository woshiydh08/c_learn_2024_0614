#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// 常量
// const 修饰的常变量
// #define 定义的标识符常量
// 枚举常量

// 没有类型的常量
#define PI 3.14
#define MAX 100
#define MIN 0
#define NAME "zhangsan"

// 枚举常量
// 默认首字母大写
// 三原色
enum Color
{
	RED = 100,
	GREEN,
	BLUE
};

// 性别
enum Sex
{
	MALE,
	FEMALE
};

int main(void)
{

	int a = 10;
	a = 20;

	printf("%d\n", a);

	// const 修饰的b本质是变量, 但不能被直接修改, 有常量属性
	const int b = 20;

	float c = PI;
	printf("%lf\n", c);

	enum Color color = RED;
	printf("%d\n", color);

	return 0;
}