#include "holberton.h"

/**
 * _strncat - check the code for Holberton School students.
 * @dest: var
 * @src: var
 * @n: var
 * Return: returns a pointer to a char.
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

		for (a = 0; dest[a] != '\0'; a++)
		{
		}
		for (b = 0; b < n && src[b] != '\0'; b++)
		{
		dest[a + b] = src[b];
		}
		dest[a + b] = '\0';
		return (dest);
}
