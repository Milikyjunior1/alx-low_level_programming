#include "lists.h"
/**
 * listint_len - for getting the nu!ber of element
 * @h: yhe head
 * Return: the number of element
 *
 */
size_t listint_len(const listint_t *h)
{
	size_t elem = 0;

	while (h)
	{
		elem++;
		h = h->next;
	}
	return (elem);
}

