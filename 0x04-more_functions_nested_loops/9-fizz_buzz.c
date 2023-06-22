#include <stdio.h>
#include "main.h"
/**
 * main - Entry block
 * Return: Always 0 (success)
 */
int main(void)
{
	int h;

	for  (h = 0; h <= 100; h++)
	{
		if (h % 3 == 0 && h % 5 == 0)
			printf("FizzBuzz");
		else if (h % 3 == 0)
			printf("Fizz");
		else if (h % 5 == 0)
			printf("Buzz");
		else
			printf("%i", h);
		if (h != 100)
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
