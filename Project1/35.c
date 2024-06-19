#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

enum Gender
{
	MALE,
	FEMALE
};

// 类型声明
struct People
{
	char name[20];
	int age;
	enum Gender gender;
};

struct Student
{
	struct People people;
	float score;
};

// 打印student 参数是指针(推荐)
void printing_through_pointer(struct Student *s)
{
	printf("%s \n", s->people.name);
	printf("%d \n", s->people.age);
	printf("%d \n", s->people.gender);
	printf("%f \n", s->score);
}

// 打印student 参数是拷贝的副本(会浪费额外的内存)
void printing_through_copies(struct Student s)
{
	printf("%s \n", s.people.name);
	printf("%d \n", s.people.age);
	printf("%d \n", s.people.gender);
	printf("%f \n", s.score);
}

// 结构体
int main(void)
{

	// 结构体变量创建
	struct Student s1 = {{"张三", 18, MALE}, 100.0};

	printing_through_pointer(&s1);
	printing_through_copies(s1);
	return 0;
}