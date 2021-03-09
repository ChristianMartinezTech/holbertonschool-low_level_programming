#include "dog.h"
#include <stdio.h>

/**
 * print_dog - funtionthat prints a sctruct dog
 * @d: var.
 */

void print_dog(struct dog *d)
{
	if (d != '\0')
	{
		printf("Name: %s/n", (*d).name = NULL ? "(nil)" : (*d).name);
		printf("Age: %f/n", (*d).age = NULL ? 0 : (*d).age);
		printf("Owner: %s/n", (*d).owner = NULL ? "(nil)" : (*d).owner);
	}
}
