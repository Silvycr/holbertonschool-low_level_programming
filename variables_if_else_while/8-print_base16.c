#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Hexadecimal
 *
 * Return: zero success
 */
int main(void)
{
	int cr;
	char ali;

	for (cr = '0'; cr <= '9'; cr++)
	{
		putchar(cr);
	}
	for (ali = 'a'; ali <= 'p'; ali++)
	{
		putchar(ali);
	}
	putchar('\n');

	return (0);
}
