#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Returns sum of all parameters
 * @n: Number of parameters
 * Return: Sum of parameters
 **/
int sum_them_all(const unsigned int n, ...)
{
	va_list rel;
	int sum = 0;
	unsigned int x;

	if (!n)
	{
		return (0);
	}
	va_start(rel, n);
	for (x = 0; x < n; x++)
	{
		sum += va_arg(rel, int);
	}
	va_end(rel);
	return (sum);
}
