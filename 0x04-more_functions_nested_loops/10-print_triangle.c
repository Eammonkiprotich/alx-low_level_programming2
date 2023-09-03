#include "main.h"

/**
 * print_triangle - prints a triagle with #
 * @size: size to be printed
 */
void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size - 1; j++)
				_putchar('\n');

			for (j = 1; j <= i; j++)
				_putchar('#');
			putchar('\n');
		}
	}
}
