#include "main.h"
/**
 * _strncat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes used from src.
 * Return: the pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int c0 = 0, c1 = 0;

	while (*(dest + c0) != '\0')
	{
		c0++;
	}

	while (c1 < n)
	{
		*(dest + c0) = *(src + c1);
		if (*(src + c1) == '\0')
			break;
		c0++;
		c1++;
	}
	return (dest);
}
