#include "main.h"
/**
 * read_textfile - for reading to posix
 * @filename: name of the file
 * @letters: number of character to be read
 * Return: letter if success or 0 if failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, rd, wr;
	char *charnum;

	if (filename == NULL)
		return (0);

	charnum = malloc(sizeof(char) * letters);
	if (charnum == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	rd = read(op, charnum, letters);
	wr = write(STDOUT_FILENO, charnum, rd);

	if (op == -1 || rd == -1 || wr == -1 || wr != rd)
	{
		free(charnum);
		return (0);
	}

	free(charnum);
	close(op);
	return (wr);
}
