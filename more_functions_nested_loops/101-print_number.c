#include <limits.h>
#include "main.h"
/**
 * print_number - Prints an integer
 * @n: Integer to be printed
 **/
void print_number(int n)
{
	int z;

	if (n < 0)
	{
		_putchar('-');
	}
	for (z = 1000000000; z > 0; z /= 10)
	{
		if (n / z)
		{
			if ((n / z) % 10 < 0)
				_putchar(-(n / z % 10) + '0');
			else
				_putchar((n / z % 10) + '0');
		}
		else if (n / z == 0 && z == 1)
		{
			_putchar(n / z % 10 + '0');
		}
	}
}
