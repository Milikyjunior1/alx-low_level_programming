#include "main.h"
/**
 * _print_rev_recursion- for p4in5ing ib reverse
 * @s: character orinted in reverse
 * Return: Always 0
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
