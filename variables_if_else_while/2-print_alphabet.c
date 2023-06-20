#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Alphabet in lowercase
 *
 * Return: zero success
 */
int main(void)
{
	char min;

	for (min = 'a'; min <= 'z'; min++)
	{
		putchar(min);
	}
	putchar('\n');
	return (0);
}
