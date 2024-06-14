// #define _CRT_SECURE_NO_WARNINGS

// #include <stdio.h>
// #include <string.h>

// // char 字符类型
// //  'a';

// int main(void)
// {
// 	char ch = 'w';

// 	// 注意！！！C语言中没有字符串
// 	// 使用数组来表示字符串
// 	// 字符串末尾自动补充结束标识\0
// 	char arr[] = "abcdef"; // 长度是7
// 	// 使用对象的写法时，必须手动添加结束标识
// 	char arr2[] = {'a', 'b', 'c', 'd', 'e', 'f', '\0'};

// 	printf("%s\n", arr);
// 	printf("%s\n", arr2);

// 	// 输出arr的长度 => 7
// 	printf("%d\n", sizeof(arr));

// 	// 输出arr的长度(不包含结束标识) => 6
// 	printf("%d\n", strlen(arr));

// 	// strlen库需引入头文件
// 	int len = strlen("abc");
// 	printf("len = %d\n", len);

// 	return 0;
// }