#include "holberton.h"
#include <stdio.h>

/**
 * main - prints the number of arguments
 * @argc: var
 * @argv: var
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int counter;

	for (counter = 0; counter < argc; counter++)
	{
		printf("argv[%2d]: %s\n", counter, argv[counter]);
	}
	return (0);
}
