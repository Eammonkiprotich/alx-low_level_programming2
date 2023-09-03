#include "main.h"

/**
 * print_square - print square of n size
 * @size: size to be printed
 */
void print_square(int size)
{
	int n;
	int hash;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (n = 0; n < size; n++)
		{
			hash = 0;
			while (hash <= size)
				_putchar('#');
			_putchar('\n');
		}
	}
}
