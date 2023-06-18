#include <stdio.h>
/**
 *main - Entry block
 *Return: Always 0 (success)
 */
int main(void)
{
	char le;

	for (le = 'a'; le <= 'z'; le++)
	{
		if (le != 'e' && le != 'q')
			putchar(le);
	}
	putchar('\n');
	return (0);
}
