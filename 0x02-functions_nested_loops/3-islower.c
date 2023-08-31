#include "main.h"
#include <stdio.h>

/**
 * _islower - checks if a character is lowercase
 *
 * Return: 0
 *
 */
int _islower(int c)
{
	while (c >=97 && c <= 122)
		return (1);
	return (0);
}
