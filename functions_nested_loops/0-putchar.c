#include <unistd.h>
#include "main.h"
/**
 * main - Prints _putchar
 *
 * Return: zero on success
 */
int main(void)
{
	char msg[8] = "_putchar";
	int al;

	for (al = 0; al <= 8; al++)
	{
		_putchar(msg[al]);
	}
	_putchar('\n');

	return (0);
}
