#include <stdio.h>

int main(void)
{
	int a;

	printf(":");
	scanf_s("%d", &a);

	if (a > 0)
		printf("���� ����");
	else if (a < 0)
		printf("���� ����");
	else 
		printf("0�Դϴ�.");

	return 0;
}