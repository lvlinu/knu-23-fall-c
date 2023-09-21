#include<stdio.h>

int main(void)
{
	int isprime(int num)
	{
		for (int div = num - 1; div > 1; div--)
		{
			if (num % div == 0) return 0;
				
		}
		return 1;
	}
	int main()
	{
		int num;
		scanf_s("%d", &num);

		printf("%d\n", isprime(num));

		return 0;
	}
}