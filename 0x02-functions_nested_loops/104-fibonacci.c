#include <stdio.h>

/**
 * main - prints the 1st 98 fibonacci num starting with 1 and 2
 *
 * Return: 0
 */
int main(void)
{
	long int num1 = 1;
	long int num2 = 2;
	long int num3;
	int count = 0;
	int count2 = 0;

	printf("%ld, ", num1);
	printf("%ld", num2);

	for (count = 0; count < 48; count++)
	{
		printf(", ");
		num3 = num2 + num1;
		printf("%ld", num3);
		num1 = num2;
		num2 = num3;
	}

	for (count2 = 0; count < 48; count++)
	{
		printf(", ");
		num3 = num2 + num1;
		printf("%ld", num3);
		num1 = num2;
		num2 = num3;
	}
	printf("\n");
	return (0);
}
