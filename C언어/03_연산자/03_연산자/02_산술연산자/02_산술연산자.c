#pragma warning (disable : 4996)
#include <stdio.h>

int main()
{
	printf("num1 �� �Է��ϼ��� : ");
	int num1;
	scanf("%d", &num1);

	printf("num2 �� �Է��ϼ��� : ");
	int num2;
	scanf("%d", &num2);

	printf("���� : %d \n", (num1 + num2));
	printf("���� : %d \n", (num1 - num2));
	printf("���� : %d \n", (num1 * num2));
	printf("������ : %f \n", ((float)num1 / num2));


	/*int num1 = 7;
	int num2 = 7;

	double addition = num1 + num2;
	double subtraction = num1 - num2;
	double multiplication = num1 * num2;
	double division = (double)num1 / num2;

	printf("addition = %.0f \n", addition);
	printf("subtraction = %.2f \n", subtraction);
	printf("multiplication = %.2f \n", multiplication);
	printf("divison = %.2f \n", division);*/


	return 0;
}