#include "holberton.h"

/**
 * *_strcat - main function
 * @dest: pointer to s1
 * @src: pointer to s2
 * Return: 0 "Strings"
 */

char *_strcat(char *dest, char *src)
	{
		int i, a;

		for (i = 0; dest[i] != '\0'; i++)
		{
		}
		for (a = 0; src[a] != '\0'; a++)
		{
			dest[i] = src[a];
			i++;
		}
		dest[i] = '\0';
		return (dest);
	}
