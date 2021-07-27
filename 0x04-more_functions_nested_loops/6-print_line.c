#include "holberton.h"

/**
 * main -  function that draws a straight line in the terminal n times
 * @print_line - print n number of lines
 * Return: n times "_"
 */

void print_line(int n)
{
    int count;

    if (n > '0')
    {
        for (count = '0'; count <= n; count++)
        {
            _putchar('_');
        }
    }
    _putchar('\n');
}
