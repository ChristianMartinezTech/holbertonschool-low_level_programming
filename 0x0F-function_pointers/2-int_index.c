#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - executes a function given as a parameter
 * @array: array
 * @size: size
 * @cmp: var
 * Return: NULL
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if ((cmp != NULL) && (array != NULL))
	{
		for (a = 0; a < size; a++)
		{
			if (cmp(array[a]) != 0)
			{
				return (a);
			}
		}
	}
	else if (size <= 0)
	{
		return (-1);
	}
	return (-1);
}
