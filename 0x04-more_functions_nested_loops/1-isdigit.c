#include "main.h"

/**
 * _isdigit - checks if c is a digit between 0 and 9
 * @c: number to be checkedx
 *
 * Return: 1 if a digit 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
