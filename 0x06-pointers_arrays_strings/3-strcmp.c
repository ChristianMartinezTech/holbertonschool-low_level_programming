#include "holberton.h"

/**
* _strcmp - compares the values of two strings
* @s1: s1 var
* @s2: s2 var
* Return: and int.
*/

int _strcmp(char *s1, char *s2)
{
	int b;

	for (b = 0; s1[b] != '\0' && s2[b] != '\0'; b++)
	{
	if (s1[b] != s2[b])
	{
		return (s1[b] - s2[b]);
	}
	}
	return (0);
}
