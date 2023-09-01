#include "main.h"

/**
 * print_last_digit - prints last digit
 * @n: the number we extract the last digit from.
 *
 * Return: last digit of the number
 */
int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
		n = n * -1;
	_putchar(n + '0');
	return (n);
}
