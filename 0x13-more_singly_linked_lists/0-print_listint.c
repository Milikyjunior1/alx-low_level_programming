#include "lists.h"
/**
 * printlistint - for printing link list
 * @h: the index of node
 * Return: Alwayd 0
 *
 */
size_t printlistint(const listint_t *h)
{
	size_t p;

	while (h)
	{
		p++;
		printf("%d\n", h->n);
	}
	return (p);
}
