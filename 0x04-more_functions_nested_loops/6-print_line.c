#include "main.h"

/**
 * print_line - prints a line with n _ characters
 * @n: number of characters to be printed
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
