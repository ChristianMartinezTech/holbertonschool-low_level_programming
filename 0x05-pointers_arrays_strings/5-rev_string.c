#include "holberton.h"

/**
 * rev_string - reverse a string
 * @s: var
 * Return: null
 */

void rev_string(char *s)
{
int size = 0, i, tmp;

while (s[size] != '\0')
{
size++;
}
size--;
for (i = 0; i < size; i++, size--)
{
tmp = s[i];
s[i] = s[size];
s[size] = tmp;
}
}
