#include "main.h"
/**
 * _strcpy - for copying
 * @src: to copy to
 * @dest: to copy from
 * Return: Always 0
 */
char *_strcpy(char *dest, char *src)
{
	char *start;

	*start = *dest;
	while (*src != '\0')
	{
		*dest = *src;
		*src = *dest;
	}
	*dest = *dest + '\0';
	return (start);
}

