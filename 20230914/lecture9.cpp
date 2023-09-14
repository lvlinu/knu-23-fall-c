#include <stdio.h>

int main(void)
{
	int i;
	int sum = 0;
	
	for (i = 0; i < 10; i+=2) {
		printf("i = %d  sum =%d\n", i, sum);
		sum += (i + 1);
	}
	printf("sum = %d\n", sum);
	return 0;
}