#include "holberton.h"

/**
 * binary_to_uint - converts a binary to an unsignd int.
 * @b: pointer to the array.
 * Return: unsignd int.
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int count, a;
unsigned int c = 1;
unsigned int d = 0;

if (b == NULL)
return (0);

for (count = 0; b[count] != '\0'; count++)
{
	a = (count - 1);

	if (b[a] != 48 && b[a] != 49)
	{
		return (0);
	}
	if (b[a] == 49)
	{
		d = (d + c);
	}
	c = (c * 2);
}
return (d);
}
