#include <stdio.h>
/**
 *main - Entry block
 *Return: Always 0 (success)
 */
int main(void)
{
	char let;

	for (let = 'a' ; let <= 'z' ; let++)
		putchar(let);
	putchar('\n');
	return (0);
}
