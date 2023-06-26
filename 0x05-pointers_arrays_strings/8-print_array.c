#include "main.h"
#include <stdio.h>
/**
 * print_array - for orinting array
 * @n: numner of array
 * @a: address od array
 * Retuen: Always 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
