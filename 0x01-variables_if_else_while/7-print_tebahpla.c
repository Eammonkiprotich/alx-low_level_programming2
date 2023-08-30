#include <stdio.h>

/**
 * main - print alphabet in reverse
 *
 * Return: 0
 */
int main(void)
{
	int n;
	char array[26]={'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
		'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w',
		'x', 'y', 'z'}

	for (n = 25; n > -1; n--)
		putchar(array[n]);
	putchar('\n');
	return (0);
}
