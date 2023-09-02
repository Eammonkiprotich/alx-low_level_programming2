#include <stdio.h>

/**
 * main - prints the sum of all N num below 1024 and is a multiple of 3, 5
 *
 * Return: 0 on success
 */
int main(void)
{
	int n;
	int sum = 0;

	for (n = 0; n < 1024; n++)
	{
		if(n % 3 = 0 || n % 5 = 0)
			sum += n;
	}
	printf("%d\n", sum);
	return (0);
}
