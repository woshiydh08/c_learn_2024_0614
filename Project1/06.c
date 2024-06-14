#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// 选择语句和循环语句
int main(void)
{
	int input = 0;

	scanf("%d", &input);

	// 选择语句
	// if (input == 1)
	// {
	// 	printf("1\n");
	// }
	// else
	// {
	// 	printf("0\n");
	// }

	// 循环语句
	while (input != 0)
	{
		printf("%d\n", input);
		scanf("%d", &input);
	}


	return 0;
}