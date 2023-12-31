#include "variadic_functions.h"
/**
 * print_numbers - Prints numbers.
 * @separator: printed between numbers.
 * @n: number of integers.
 **/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int x;

	va_start(list, n);

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(list, int));
		if (separator && x < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(list);
}
