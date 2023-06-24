#include "main.h"
/**
 * print_times_table - Prints the n times table
 * @n: number times table
 * Return: no return
 */
void print_times_table(int n)
{
	int ka, ta, na;

	if (n >= 0 && n <= 15)
	{
		for (ka = 0; ka <= n; ka++)
		{
			_putchar(48);
			for (ta = 1; ta <= n; ta++)
			{
				na = ka * ta;
				_putchar(44);
				_putchar(32);
				if (na <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(na + 48);
				}
				else if (na <= 99)
				{
					_putchar(32);
					_putchar((na / 10) + 48);
					_putchar((na % 10) + 48);
				}
				else
				{
					_putchar(((na / 100) % 10) + 48);
					_putchar(((na / 10) % 10) + 48);
					_putchar((na % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
