#include "holberton.h"

/**
 * puts2 - check the code for Holberton School students.
 * @str: var
 * Return: void
 */

void puts2(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i = i + 2)
_putchar(str[i]);
}
