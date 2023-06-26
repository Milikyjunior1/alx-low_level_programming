#include "main.h"
#include <stdio.h>
/**
 * _strlen - for conunting number of character
 * @s: the character
 * Return: Always 0
 */
int _strlen(char *s)
{
	int i;

	i  = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
