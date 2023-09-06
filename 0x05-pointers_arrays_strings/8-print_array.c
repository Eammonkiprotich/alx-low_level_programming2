#include "main.h"
#include <stdio.h>

/**
 * print_array - prints the n elements of an array
 * @a: the array
 * @n: number of elements to be printed
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (n >= 0)
	{
		printf("%d", *(a + i));
		i++;
		n--;
		if (n <= 0)
			break;
		else
			printf(", ");
	}
}
