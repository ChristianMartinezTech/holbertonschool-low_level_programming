#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argc: var
 * @argv: var
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int val_1 = atoi(argv[1]);
	int val_2 = atoi(argv[2]);
	int mult = val_1 * val_2;

	 if (argc == 3)
	 {
		 printf("%d\n", mult);
		 return (0);
	 }
	 else
	 {
		 printf("Error\n");
		 return (1);
	 }
}
