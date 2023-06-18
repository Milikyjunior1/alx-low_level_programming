#include <stdio.h>
/**
 *main - Entry block
 *Return: Always 0 (success)
 */
int main(void)
{
	char low, high;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
	for (high = 'A'; high <= 'Z'; high++)
		putchar(high);
	putchar('\n');
}
