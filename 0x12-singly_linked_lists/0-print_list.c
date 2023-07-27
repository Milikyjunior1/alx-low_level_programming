#include "lists.h"
/**
 * print_list - for printing list
 * @h: lenght of the array str
 * Return: Always 0
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (!(h->str))
			printf("[0] (nil)\n");
		else
			printf("[%u] (%s)\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
