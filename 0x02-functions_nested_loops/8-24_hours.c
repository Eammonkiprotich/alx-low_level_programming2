#include "main.h"

/**
 * jack_bauer - prints jacks day
 */
void jack_bauer(void)
{
	int hour;
	int min;

	for (hour = 00; hour < 24; hour++)
	{
		for (min = 00; min < 60; min++)
		{
			_putchar(hour + '0');
			_putchar(':');
			_putchar(min + '0');
			_putchar('\n');
		}
	}
}
