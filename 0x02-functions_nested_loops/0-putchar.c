#include "main.h"
#include <stdio.h>
/**
 *main - Entry block
 *Return: Always 0 (success)
 */
int main(void)
{
	char c[10] = "_putchar\n";
	int i = 0;

	while (c[i])
	{
		_putchar(c[i]);
		i++;
	}
	return (0);
}
