#include <stdio.h>

/**
 * main prints all possible combination of single digit numbers
 *
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n);
		putchar(',\n');
	}
	return (0);
}
