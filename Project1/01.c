// // 解决scanf函数在vs函数里报错
// // 安装目录\Microsoft Visual Studio\2022\Community\Common7\IDE\VC\VCProjectItems 修改文件
// #define _CRT_SECURE_NO_WARNINGS
// #include <stdio.h>

// // 变量的概念
// // 局部变量 - {}内部定义的变量
// // 全局变量 - {}外部定义的变量

// int b = 20;

// int main(void)
// {
// 	int a = 20;
// 	printf("%d\n", a);

// 	int num1 = 0;
// 	int num2 = 0;

// 	// scanf 输入函数
// 	// 输入2个数字, 分别存放num1, num2里
// 	// & 取地址符，是单目运算符，用于获取变量在内存中的地址
// 	scanf("%d %d", &num1, &num2);

// 	int sum = num1 + num2;

// 	printf("%d\n", sum);

// 	return 0;
// }