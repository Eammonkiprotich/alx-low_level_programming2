#include "main.h"

/**
 * print_times_table - prints times table of n
 * @n: the number we print the times table of
 */
void print_times_table(int n)
{
	int i;
	int j;
	int prod;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			prod = i * j;
			_putchar(prod + '0');
			_putchat(' ');
		}
	}
}
