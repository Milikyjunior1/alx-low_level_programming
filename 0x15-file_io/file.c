#include "main.h"
/**
 * main - Entry block
 * Return: 0
 */
int main(void)
{
	char *buf;
//	buf = (char *) malloc(sizeof(char) * 240);
	int nread;
	nread = read(0, &buf, 40);
	write(1, buf, nread);
	printf("%i\n", nread);
//	free(buf);
	return (0);
}
