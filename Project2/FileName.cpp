#include <stdio.h>


int main(void)
{
	int a;
	int b;
	int c;
	int d;
	scanf_s("%d", &d);
	printf("%d층 피라미드\n" ,d);
	for (a = 0; a < d; a++)
	{
		for (b = a; b <= 5 - 1; b++) {
			printf(" ");
		}
		for (c = 0; c <= (a * 2); c++) {
			printf("*");
		}
		printf("\n");
	}


	return 0;
}