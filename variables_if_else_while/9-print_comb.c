#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Prints all possible combinations of single-digit numbers
 *
 * Return: zero on success
 */
int main(void)
{
	int ro;

	for (ro = '0'; ro <= '9'; ro++)
	{
		putchar(ro);
		if (ro != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}

