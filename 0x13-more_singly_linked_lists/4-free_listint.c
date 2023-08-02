#include "lists.h"
/**
 * free_listint - for freing allocated space
 * @head: the head of a node
 */
void free_listint(listint_t *head)
{
	head = malloc(sizeof(listint_t));
	free(head);
}
