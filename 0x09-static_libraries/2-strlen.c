#include "main.h"

/**
 * _strlen - returns the length of a str.
 * @s: input str.
 * Return: length of a str.
 */
int _strlen(char *s)
{
	int c = 0;

	while (*(s + c) != '\0')
		c++;
	return (c);
}
