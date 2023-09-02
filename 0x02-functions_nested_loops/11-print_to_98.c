#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all N numbers from n to 98
 * @n: the number
 */
void print_to_98(int n)
{
	int i;
	/*bint j; */

	if (n < 98)
	{
		for (i = n; i < 98; i++)
		{
			if (i < 10)
				putchar(i + '0');
			else
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
			}
		}
	}
}
