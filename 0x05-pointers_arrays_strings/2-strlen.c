#include "holberton.h"

/**
 * _strlen - funtion to reset the variable value to 98
 *@s: length
 * Return: (void)
 */

int _strlen(char *s)
{
	int str;

	for (str = 0; s[str] != '\0'; str++)
		;
	return (str);
}
