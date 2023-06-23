#include "main.h"
/**
 * jack_bauer - Print every minute of the day
 * Return: none
 **/
void jack_bauer(void)
{
	int hi, ra;
	int kata = 0;

	for (hi = 0; hi < 60; hi++)
	{
		for (ra = 0; ra < 60; ra++, kata++)
		{
			if (kata == 1440)
				break;
			_putchar(hi / 10 + '0');
			_putchar(hi % 10 + '0');
			_putchar(':');
			_putchar(ra / 10 + '0');
			_putchar(ra % 10 + '0');
			_putchar('\n');
		}
	}
}
