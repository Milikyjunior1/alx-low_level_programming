#include "lists.h"
/**
 * add_nodeint - for adding nod
 * @head: the begining of the node
 * @n: the interger to be added
 * Return: Always 0
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *sp_ew = malloc(sizeof(listint_t));

	if (sp_ew == NULL)
		return (NULL);
	while (sp_ew != NULL)
	{
		sp_ew->n = n;
		sp_ew->next = *head;
		*head = sp_ew;
		return (sp_ew);
	}
}
