#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - prints alphabet in lower case
 *
 *
 */
void print_alphabet(void)
{
	int i;
	char array[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
		'l', 'm', 'n', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w',
		'x', 'y', 'z'};

	for (i = 0; i < 26; i++)
		putchar(array[i]);
	putchar('\n');
}
