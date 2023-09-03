#include "main.h"

/**
 * print_diagonal - prints the \ n times
 * @n: number of times the \ should be printed
 */
void print_diagonal(int n)
{
	int i;
	int spaces;

	if (n <= 0)
		_putchar('\n');

	for (i = 0; i < n; i++)
	{
		for (spaces = 0; spaces < i; spaces++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
			
