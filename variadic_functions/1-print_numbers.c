#include "variadic_functions.h"
/**
  * sum_them_all - sums all arguments
  * @n: number of arguments
  * Return: sum of all arguments
  **/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int x, resultado;
	va_list list;

	if (n == 0)
		return (0);
	va_start(list, n);
	for (x = resultado = 0; x < n; x++)
	{
		resultado += va_arg(list, int);
	}
	va_end(list);
	return (resultado);
}
