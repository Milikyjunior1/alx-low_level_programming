#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - for checking malloc
 * @b: the size to be added
 * Return: Always 0
 */
void *malloc_checked(unsigned int b)
{
	void *block;

	block = malloc(b);
	if (block == NULL)
		exit(98);
	return (block);
}
