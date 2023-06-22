#include "main.h"
/**
 * print_last_digit - Print last digit
 * @a: Value evaluated
 * Return: The value of the last digit
 **/
int print_last_digit(int a)
{
	a %= 10;
	if (a < 0)
		a *= -1;
	_putchar(a + '0');

	return (a);
}
