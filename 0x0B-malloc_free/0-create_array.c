#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - prints the name of the program
 * @size: var
 * @c: var
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;

	unsigned int a;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		ptr = malloc(sizeof(char) * size);

		if (ptr == NULL)
		{
			return (NULL);
		}

		for (a = 0; a < size; a++)
		{
			ptr[a] = c;
		}
		return (ptr);
	}
}
