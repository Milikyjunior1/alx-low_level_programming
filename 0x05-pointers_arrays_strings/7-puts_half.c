#include "main.h"
/**
 * puts_half - for pronting half of character
 * @str: the half
 * Return: Always 0
 */
void puts_half(char *str)
{
	int i, j;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{
		for (j = i / 2; str[j] != '\0'; j++)
		{
			_putchar(str[j]);
		}
	}
	else if (i % 2 == 1)
	{
		for (j = (i - 1) / 2; j < i - 1; j++)
		{
			_putchar(str[j + 1]);
		}

	}
	_putchar('\n');
}
