#include <stdio.h>

int main(void)
{
	// �ַ��������� => 1
	printf("%zu\n", sizeof(char));

	// ������ => 2
	printf("%zu\n", sizeof(short));

	// ���� => 4
	printf("%zu\n", sizeof(int));

	// ������ => 4
	printf("%zu\n", sizeof(long));

	// �������� => 8
	printf("%zu\n", sizeof(long long));

	// �����ȸ��� => 4
	printf("%zu\n", sizeof(float));

	// ˫���ȸ��� => 8
	printf("%zu\n", sizeof(double));
	

	return 0;
}