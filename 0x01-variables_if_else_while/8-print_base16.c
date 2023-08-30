#include <stdio.h>

/**
 * main - prints the hex values
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int array[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
		'a', 'b', 'c', 'd', 'e', 'f'};

	for (n = 0; n < 16; n++)
		putchar(array[n]);
	putchar('\n');
	return (0);
}
