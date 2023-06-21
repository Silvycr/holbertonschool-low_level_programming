#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Prints all possible different combinations of two digits
 *
 * Return: zero on success
 */
int main(void)
{
	int co, ro;

	for (co = '0'; co < '9'; co++)
	{
		for (ro = co + 1; ro <= '9'; ro++)
		{
			if (ro != co) /* Conditional */
			{
				putchar(co);
				putchar(ro);

				if (co == '8' && ro == '9')
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
