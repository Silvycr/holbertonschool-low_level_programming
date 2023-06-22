#include "main.h"
/**
 * _islower - Function that checks for lowercase character
 * @c: An input letter
 * Return: 1 if is lowercase or 0 if is otherwise
 **/
int _islower(int c)
{
	char aly;
	int bajo = 0;

	for (aly = 'a'; aly <= 'z'; aly++)
	{
		if (aly == c)
			bajo = 1;
	}

	return (bajo);
}
