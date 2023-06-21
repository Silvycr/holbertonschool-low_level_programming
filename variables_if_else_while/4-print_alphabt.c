#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Prints the alphabet in lowercase
 *
 * Return: zero on success
 */
int main(void)
{
	char sil, al, co;

	al = 'e';
	co = 'q';

	for (sil = 'a'; sil <= 'z'; sil++)
	{
		if (sil != al && sil != co)
			putchar(sil);
	}
	putchar('\n');

	return (0);
}
