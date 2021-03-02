#include "holberton.h"
#include <stdio.h>

/**
 * main - program that multiplies two numbers
 * @argc: var
 * @argv: var
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int c;
	
	if (argc < 2)
	{
		printf("Error\n");
			return (1);
	}

	else
	{
		for (c = 0; c < argc; c ++)
		{
		printf("%d\n", c);
		return (0);
	}
}
