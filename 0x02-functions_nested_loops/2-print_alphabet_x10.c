#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - prints alphabet in lower case x10
 *
 *
 */
void print_alphabet(void)
{
	char alphabet;
	int i;

	for (i = 0; i <= 10; i++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
			putchar(alphabet);
		putchar('\n');
	}
}
