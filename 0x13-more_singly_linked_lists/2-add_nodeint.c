#include "lists.h"
/**
 * add_nodeint - for adding nod
 * @head: the begining of the node
 * @n: the interger to be added
 * Return: Always 0
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	while (new != NULL)
	{
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}
}
