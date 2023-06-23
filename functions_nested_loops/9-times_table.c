#include "main.h"
/**
 * times_table - Print the 9 times table
 * Return: none
 **/
void times_table(void)
{
	int ka, na, ra;

	for (ka = 0; ka <= 9; ka++)
	{
		for (na = 0; na <= 9; na++)
		{
			ra = ka * na;

			if ((ra / 10) == 0)
			{
				if (na != 0)
					_putchar(' ');
				_putchar(ra + '0');

				if (na == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((ra / 10) + '0');
				_putchar((ra % 10) + '0');
				if (na == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
