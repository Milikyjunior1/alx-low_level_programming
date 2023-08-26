#include "main.h"
#include <stdio.h>
/**
 *main - Entry block
 *Return: Always 0 (success)
 */
int main(void)
{
	int i;
	char c[10] = "_putchar\n";

	for (i = 0; i < 10; i++)
	{
		_putchar(c[i]);
	}
	return (0);
}
