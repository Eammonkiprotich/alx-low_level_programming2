#include "main.h"
#include <stdio.h>

/**
 * print_sign - returns diff values for diff outcomes
 * @n: the number to be checked
 *
 * Return: 1 if n is +ve, 0 if n=0, -1 if n is -ve
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		putchar('-');
		return (-1);
	}
	else
	{
		putchar('0');
		return (0);
	}
}
