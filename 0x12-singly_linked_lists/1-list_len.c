#include "lists.h"
/**
 * list_len - for printing the number of element in a linked list
 * @h: pointing to the struct of list_t
 * Return: Alwaysn0
 */
size_t list_len(const list_t *h)
{
	size_t numOfelem = 0;

	while (h)
	{
		numOfelem++;
		h = h->next;
	}
	return (numOfelem);
}

