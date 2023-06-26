#include "main.h"
/**
 * print_rev - for printing in reverse
 * @s: the reverse character
 * Return: Always 0
 */
void print_rev(char *s)
{
	int i, j, length;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	length = i;
	for (j = length - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
