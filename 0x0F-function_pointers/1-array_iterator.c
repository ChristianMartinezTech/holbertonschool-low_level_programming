#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a function given as a parameter
 * @array: array
 * @size: size
 * @action: action
 * Return: NULL
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if ((array != NULL) && (action != NULL))
		for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
