#include "main.h"

/**
 * _abs: prints absolute value of an integer.
 *
 * Return: 0
 */
int _abs(int n)
{
	if (n < 0)
		n = n * -1;
	_putchar(n);
	return (0);
}

