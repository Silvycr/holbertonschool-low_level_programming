#include "function_pointers.h"
/**
 * array_iterator - Executes a function given as a parameter
 * @array: Pointer to array
 * @size: Size of array
 * @action: Function code
 **/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t z = 0;

	if (array && size && action)
		while (z < size)
			action(*(array + z++));
}
