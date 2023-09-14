#include <stdio.h>

int main(void)
{
	int a;

	printf(":");
	scanf_s("%d", &a);

	if (a > 0)
		printf("양수");
	else if (a < 0)
		printf("음수");
	else 
		printf("0입니다.");

	return 0;
}