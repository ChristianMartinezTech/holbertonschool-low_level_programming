#include "holberton.h"
/**
 * _islower - determinate if the character is lowercase or not
 *  @c: The character to print
 * Return: 1 if this is lowercase 0 if not
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
