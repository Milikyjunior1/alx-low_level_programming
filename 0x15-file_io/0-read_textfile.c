#include "main.h"
/**
 * read_textfile - for reading text file from standard input
 * @letters: the number of letters to red
 * Return: Always 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *point;
	point = read(STDIN_FILENO, filename, letters);
	if (point == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	if 
