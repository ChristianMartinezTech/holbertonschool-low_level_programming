#include "holberton.h"


/**
 * malloc_checked - writes the character c to stdout
 * @b: The character to print
 * Return: On success 1.
 */

void *malloc_checked(unsigned int b)
{
	int *e;

	e = malloc(b);

	if (e == '\0')
		exit(98);

	return (e);
}
