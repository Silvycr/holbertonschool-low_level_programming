#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Smile in the mirror
 *
 * Return: zero on success
 */
int main(void)
{
	char sil;

	for (sil = 'z'; sil >= 'a'; sil--)
	{
		putchar(sil);
	}
	putchar('\n');

	return (0);
}
