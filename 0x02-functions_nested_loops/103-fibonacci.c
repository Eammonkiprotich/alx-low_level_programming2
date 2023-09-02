#include <stdio.h>

/**
 * main - prints the sum of even valued fibonacci terms in a sequence
 *
 * Return: 0
 */
int main(void)
{
	long int num1 = 1;
	long int num2 = 2;
	long int num3;
	int count = 0;

	while(num3 <= 4000000)
	{
		num3 = num1 + num2;
		if (num3 % 2 == 0)
			count += num3
		num2 = num3;
		num1 = num2;
	}
	printf("%d", countt);
}

