#include <stdio.h>

int main(void)
{
	int sel;

	printf("1 더하기 2빼기 3 곱하기 4 나누기\n");
	scanf_s("%d", &sel);

	calculator(sel);
	

	return 0;
}

void calculator(int selecor)
{
	int num1;
	int num2;

	printf("숫자 1을 입력하시오:\n");
	scanf_s("%lf", &num1);

	printf("숫자 2를 입력하시오\n");
	scanf_s("%lf", &num2);

}