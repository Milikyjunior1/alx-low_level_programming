#include "lists.h"
/**
 * printlistint - for printing link list
 * @h: the index of node
 * Return: Always 0
 */
size_t printlistint(const listint_t *h)
{
	size_t p = 0;

	while (h && (h->n) != NULL)
	{
		printf("%u\n", h->n);
		h = h->next;
		p++;
	}
	return (p);
}
