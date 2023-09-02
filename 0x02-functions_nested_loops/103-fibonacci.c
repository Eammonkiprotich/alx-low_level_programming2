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
	int sum = 0;

	while(count <= 4000000)
	{
		num3 = num1 + num2;
		if (num3 % 2 == 0)
			sum += num3;
		num2 = num3;
		num1 = num2;
		count++;
	}
	printf("%d", sum);
	return (0);
}

