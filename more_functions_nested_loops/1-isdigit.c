#include "main.h"
/**
 * _isdigit - Function that checks for a digit
 * @c: Value evaluated
 * Retur: 1 digit, otherwise 0
 **/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
