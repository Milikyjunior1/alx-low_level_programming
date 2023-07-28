#include "lists.h"
/**
 * add_node - for adding node
 * @head: the pointer 
 * @str: node tonbe pointed to
 * Return: Always 0
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t almemory = malloc(sizeof(list_t));
	if (almemory == NULL)
		return (NULL);
	char *fake = strdup(str);
	if (fake == NULL)
	{
		free(almemory);
		return (NULL);
	}
	while (almemory != NULL)
	{
		almemory->str = fake;
		almemory->next = next;
		almemory->len = len;
		almemory = *head;
		return (almemory);
	}
}
