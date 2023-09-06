#include "main.h"
/**
 * read_textfile - for reading to standard output
 * @filename: the file to read from
 * @letters: the numbers of character to be read
 * Return: 0 on error and letters on success
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char  *buffer;
	ssize_t nread, nwrite;

	if (filename)
	{
		fd = open(filename, O_RDONLY);
		if (fd == -1)
		{
			return (0);
		}
		buffer = (char *) malloc(sizeof(char *) * letters);
		if(buffer == NULL)
		{
			close (fd);
			return (0);
		}
		nread = read(fd, buffer, letters);
		close (fd);
		if (nread == -1)
		{
			free(buffer);
			return (0);
		}
		nwrite = write(STDOUT_FILENO, buffer, nread);
		free (buffer);
		if (nread != nwrite)
		{
			return (0);
		}
		else
		{
			return (nwrite);
		}
	}
}

