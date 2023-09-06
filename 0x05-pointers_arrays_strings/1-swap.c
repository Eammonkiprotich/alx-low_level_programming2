#include "main.h"

/**
 * swap_int(int *a, int *b)
 * @a: 1st integer
 * @b: 2nd integer
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
