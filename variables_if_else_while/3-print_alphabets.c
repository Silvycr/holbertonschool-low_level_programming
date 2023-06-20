#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Alphabet
 *
 * Return: zero on success
 */
int main(void)
{
	char may;

	for (may = 'a'; may <= 'z'; may++)
	{
		putchar(may);
	}
	for (may = 'A'; may <= 'Z'; may++)
	{
		putchar(may);
	}
	putchar('\n');
	return (0);
}
