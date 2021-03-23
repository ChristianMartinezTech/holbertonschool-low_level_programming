#include "holberton.h"

/**
 * puts2 - check the code for Holberton School students.
 * @str: var
 * Return: void
 */

void puts2(char *str)
{
int i, t;

for (t = 0; str[t] != '\0'; t++)
{
}
for (i = 0; i < t; i = i + 2)
{
    _putchar(str[i]);
}
_putchar('\n');
}
