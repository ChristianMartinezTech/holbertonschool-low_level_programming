#include "lists.h"

/**
 * print_dlistint - prints ints in nodes
 * @h: head
 * Return: node count
 */

size_t print_dlistint(const dlistint_t *h)
{
	int x;

	for (x = 0; h != '\0'; x++)
	{
		printf("%d\n", h->n);
		h = h->_next;
	}
	return (x);
}
