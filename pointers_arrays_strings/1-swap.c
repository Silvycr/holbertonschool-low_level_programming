#include "main.h"
/**
 * swap_int - Function that swaps the values of two integers
 * @a: first
 * @b: second
 **/
void swap_int(int *a, int *b)
{
	int z;
        
	z = *a;
	*a = *b;
	*b = z;
}
