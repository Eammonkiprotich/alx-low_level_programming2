#include <stdio.h>

/**
 * main - prints the alphabet in lc and uppc
 *
 * Return: 0
 */
int main(void)
{
	int n;
	char lower[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
		'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
		'y', 'z'};
	char upper[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L',
		'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X',
		'Y', 'Z'};

	for (n = 0; n < 26; n++)
		putchar(lower[n]);
	for (n = 0; n < 26; n++)
		putchar(upper[n]);
	putchar('\n');
	return (0);
}
