#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all N numbers from n to 98
 * @n: the number
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for ( i = n; i > 98; i--)
		{
			printf("%d, ", i);
		}
	}
	else if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else 
		printf("%d", n);
}
