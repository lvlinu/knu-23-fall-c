#include <stdio.h>

int main(void)
{
	int i, j;
	
	for (i = 0; i < 5; i++) {
		for (j = 0; j < i; j++) {
			printf("   ");
		}
		if (i % 2 == 0)
			printf("|0|\n");
		else printf("|X|\n");
		printf("------------------\n");

	}
	return 0;
}