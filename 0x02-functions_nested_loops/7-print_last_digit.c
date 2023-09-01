#include "main.h"

/*
 * print_last_digit - prints the last digit of a number
 * @n: the number we extract the last digit from.
 *
 * Return: last digit of the number
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = n * -1;
	n = n % 10;
	_putchar(n + '0');
	return (n);
}
