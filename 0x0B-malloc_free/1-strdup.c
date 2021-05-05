#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - pointer to newly allocated space in mem.
 * @str: var
 * Return: pointer or NULL.
 */

char *_strdup(char *str)
{
	char *ptr;
	char *copy;

	copy = str;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		ptr = malloc(sizeof(char(copy)));
		return (ptr);
	}
}
