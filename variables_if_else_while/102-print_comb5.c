#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Prints all possible combinations of two
 *
 * Return: zero on success
 */
int main(void)
{
	int sa;
	int cr;

	for (sa = 0; sa <= 98; sa++)
	{
		for (cr = sa + 1; cr <= 99; cr++)
		{
			putchar((sa / 10) + '0');
			putchar((sa % 10) + '0');
			putchar(' ');
			putchar((cr / 10) + '0');
			putchar((cr % 10) + '0');

			if (sa == 98 && cr == 99) /*A conditional*/
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
