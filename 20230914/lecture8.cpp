#include <stdio.h>

int main(void)
{
	int jumsu;
	scanf_s("%d", &jumsu);

	if (jumsu > 100 || jumsu < 0) {
		printf("잘못 입력");
		return 0;
	}
	
	{
		int mok = jumsu / 10;

		switch(mok)
		{
		case 10:
		case 9:
				printf("A");
				break;
		case 8:
			printf("B");
			break;
		case 7:
			printf("C");
			break;
		case 6:
			printf("D");
			break;
		default:
			printf("F");

		}
	}
}