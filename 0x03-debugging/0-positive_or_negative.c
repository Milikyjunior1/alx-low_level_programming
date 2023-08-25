#include "main.h"
/**
 * main - Prints a random number and states whether
 *        it is positive, negative, or zero.
 *
 * Return: Always 0.
*/
int main(void)
{
	int d;

	srand(time(0));
	d = rand() - RAND_MAX / 2;

	if (d > 0)
		printf("%d is positive\n", d);
	else if (d < 0)
		printf("%d is negative\n", d);
	else
		printf("%d is zero\n", d);

	return (0);
}
