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
			putchar(hour + '0');
			putchar(':');
			putchar(min + '0');
		}
	}
}
