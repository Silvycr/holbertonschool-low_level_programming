#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Program that prints all possible combinations
 *
 * Return: zero on success
 */
int main(void)
{
	int sil;
	int ali;
	int cor;

	for (sil = '0'; sil <= '9'; sil++)
	{
		for (ali = sil + 1; ali <= '9'; ali++)
		{
			for (cor = ali + 1; cor <= '9'; cor++)
			{
				if ((ali != sil) != cor)
				{
					putchar(sil);
					putchar(ali);
					putchar(cor);

					if (sil == '7' && ali == '8')
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
