#include "main.h"
/**
 * print_rev - for printing in reverse
 * @s: the reverse character
 * Return: Always 0
 */
void print_rev(char *s)
{
	int f, t, length;

	f = 0;
	while (s[f] != '\0')
	{
		f++;
	}
	length = f;
	for (t = length - 1; t >= 0; t++)
	{
		_putchar(s[t]);
	}
	_putchar('\n');
}
