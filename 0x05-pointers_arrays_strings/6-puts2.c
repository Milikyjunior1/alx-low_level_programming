#include "main.h"
/**
 * puts2 - for print8ng two and skiping one
 * @str: string printed while skiping the nest
 * Return: Always 0
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
