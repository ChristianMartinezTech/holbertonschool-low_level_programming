#include "holberton.h"

/**
* _strcmp - compares the values of two strings
* @s1: s1 var
* @s2: s2 var
* Return: and int.
*/

int _strcmp(char *s1, char *s2)
{

	if (s1[0] == s2[0])
	{
		return (0);
	}
	else
	{
		return (s1[0] - s2[0]);
	}
}
