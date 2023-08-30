#include <stdio.h>

/**
 * main - all possible combinations of 2 digits
 *
 * Return: 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 9; j > -1; j--)
		{
			if (i < j)
			{
				putchar('i');
				putchar('j');

				while (j < 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
