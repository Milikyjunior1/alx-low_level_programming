#include "main.h"
/**
 * _strchr - locates a character in a string,
 * @s: string.
 * @c: character.
 * Return: the pointer to the first occurrence of the character c.
 */
char *_strchr(char *s, char c)
{
	unsigned int u = 0;

	for (; *(s + u) != '\0'; u++)
		if (*(s + u) == c)
			return (s + u);
	if (*(s + u) == c)
		return (s + u);
	return ('\0');
}
