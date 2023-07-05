#include "main.h"
/**
 * _puts_recursion - to print a character
 * @s: character pointer
 * Return: Always 0
 */
void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
