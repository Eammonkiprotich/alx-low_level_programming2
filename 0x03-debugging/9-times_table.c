#include "main.h"

/**
 * times_table - times table of 9
 */
void times_table(void)
{
	int i;
	int j;
	int n;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');

		for (j = 1; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');

			n = i * j;

			if (n >= 10)
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(n + '0');
			}
		}
		_putchar('\n');
	}
}
