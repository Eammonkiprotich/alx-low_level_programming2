#include "main.h"

/**
 * swap_int - swaps the value of 2 integers
 * @a: 1st integer
 * @b: 2nd integer
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
