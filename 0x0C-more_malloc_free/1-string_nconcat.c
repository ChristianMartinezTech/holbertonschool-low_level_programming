#include "holberton.h"

/**
 * string_nconcat - concatenate strings
 * @s1: var
 * @s2: var
 * @n: var
 * Return: Pointer.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *final;
	unsigned int a, b, a2, b2;

	if (s1 == '\0')
	s1 = "";

	if (s2 == '\0')
	s2 = "";

		for (a = 0; s1[a] != '\0'; a++)
		{
		}
		for (b = 0; s2[b] != '\0'; b++)
		{
		}

		if (n < b)
			b = n;

		b = (a + b);
		final = malloc(sizeof(char) * b++);

		if (final == '\0')
			return ('\0');

		for (a2 = 0; a2 < a; a2++)
			final[a2] = s1[a2];
		for (b2 = 0; b2 < b; b2++)
			{
			final[a2] = s2[b2];
			a2++;
			}
			final[b2] = '\0';

		return (final);
}
