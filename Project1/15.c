// #define _CRT_SECURE_NO_WARNINGS

// #include <stdio.h>

// /** 学生struct */
// struct Stu
// {
// 	// 结构体成员
// 	char name[20];
// 	int age;
// 	char sex[10];
// 	char phone[20];
// };

// void print(struct Stu *stu)
// {
// 	// 结构体指针变量 -> 成员名
// 	printf("Name: %s\n", stu->name);

// 	printf("Age: %d\n", (*stu).age);
// }

// int main(void)
// {
// 	struct Stu stu = {"ZhangSan", 18, "Male", "13111111111"};

// 	// 遍历打印出学生所有信息
// 	printf("Name: %s\n", stu.name);

// 	print(&stu);

// 	return 0;
// }