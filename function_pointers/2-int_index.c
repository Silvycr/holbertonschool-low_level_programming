#include "function_pointers.h"
/**
 * int_index - Searches an integer
 * @array: Pointer to array
 * @size: Size of array
 * @cmp: Pointer to function
 * Return: -1 if size <=0 or no matches
 **/
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array && cmp)
	{
		for (a = 0; a < size; ++a)
			if (cmp(*(array + a)))
				return (a);
	}
	return (-1);
}
