#include <stdio.h>

/**
 * main - prints alphabet in lc
 *
 * Return: 0
 */
int main(void)
{
	int i;
	char alphabet[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
		'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

	for (i = 0; i < 26; i++)
	       putchar(alphabet[i]);
	putchar('\n');
	return (0);
}
