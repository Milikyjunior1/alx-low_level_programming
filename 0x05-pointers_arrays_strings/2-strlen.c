#include "main.h"
#include <stdio.h>
/**
 * _strlen - foe conunting number of character
 * @s: the character
 * Return: Always 0
 */
int _strlen(char *s)
{
	int i;

	i  = 0;
	while (s[i] != EOF)
	{
		i++;
	}
	return (i);
}
