#include "lists.h"
/**
 * add_nodeint_end - for add8ng nide in the end
 * @head: the head
 * @n: the value
 * Return: Always 0
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end = malloc(sizeof(listint_t));

	if (end != NULL)
		return (NULL);
	end->n = n;
	end->next = NULL;
	end = *head;
	return (end);
}
