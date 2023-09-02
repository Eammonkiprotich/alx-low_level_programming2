#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all N numbers from n to 98
 * @n: the number
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
		}
	}
	else if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else 
		printf("%d", n);
	printf("\n");
}
