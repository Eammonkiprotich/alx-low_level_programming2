#include "main.h"

/**
 * print_diagonal - prints the \ n times
 * @n: the number of times
 */
void print_diagonal(int n)
{
	int i, spaces;

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
