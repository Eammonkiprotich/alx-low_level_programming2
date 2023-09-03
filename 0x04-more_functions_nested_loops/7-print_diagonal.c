#include "main.h"

/**
 * print_diagonal - prints the \ n times
 * @n: number of times the \ should be printed
 */
void print_diagonal(int n)
{
	int i;
	int j;

	for(i = 1; i <= n; i++)
	{
		for( j = 0; j <= n; j++)
			_putchar(' ');
		_putchar('\');
	}
}
			
