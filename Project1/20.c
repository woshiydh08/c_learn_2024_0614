#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include "max_and_min.h"

int main(void)
{
	int max = get_max(1, 2);
	int min = get_min(1, 2);
	printf("max = %d, min = %d\n", max, min);
	return 0;
};
