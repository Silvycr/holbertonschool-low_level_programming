#include "variadic_functions.h"
/**
  * print_strings - print a list of strings
  * @separator: characters used to delimit
  * @n: nmber of items to print
  **/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list lista;
	unsigned int z;
	char *x;

	va_start(lista, n);
	for (z = 0; z < n; ++z)
	{
		x = va_arg(lista, char *);
		if (!x)
			printf("(nil)");
		else
			printf("%s", x);
		if (z < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(lista);
}
