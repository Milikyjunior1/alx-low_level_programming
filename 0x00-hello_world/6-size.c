#include <stdio.h>
/**
 *main - Entry block
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	printf("size of a char: %i byte(s)\n", (int) sizeof(char));
	printf("size of an int: %i byte(s)\n", (int) sizeof(int));
	printf("size of a long int: %i byte(s)\n", (int) sizeof(long int));
	printf("size of a long long int: %i byte(s)\n", (int) sizeof(long long int));
	printf("size of a float: %i byte(s)\n", (int) sizeof(float));
	return (0);
}
