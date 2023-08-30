#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints alphabet except q and e
 *
 * Return: 0
 */
int main(void)
{
	int n;
	char lower[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
		'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
		'y', 'z'};

	for (n = 0; n < 26; n++)
	{
		if (lower[n] == 'q' || lower[n] == 'e')
			continue;
		putchar(lower[n]);
	}
	putchar('\n');
	return (0);
}
