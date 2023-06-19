#include <stdio.h>
/**
 *main - Entry block
 *Return: Always 0 (success)
 */
int main(void)
{
	int num, num1;
	
	for (num1 = num + 1; num1 < 10; num1++)
		{
			putchar((num % 10) + '0');
			putchar((num1 % 10) + '0');
			if (num == 8 && num1 == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
