#include "main.h"
/**
 * times_table - Print the 9 times table
 * Return: none
 **/
void times_table(void)
{
	int ka, na;

	for (ka = 0; ka < 10; ka++)
	{
		for (na = 0; na < 10; na++)
		{
			if (na == 0)
			{
				_putchar('0');
			}
			else if (ka * na < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(ka * na + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((ka * na) / 10 + '0');
				_putchar((ka * na) / 10 + '0');
			}
		}
		_putchar('\n');
	}
}
