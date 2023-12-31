#include "main.h"
/**
 * read_textfile - for reading to standard output
 * @filename: the file to read from
 * @letters: the numbers of character to be read
 * Return: 0 on error and letters on success
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t _file, num_of_ch, output;
	char *fdtext;

	fdtext = malloc(letters);
	if (fdtext == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	_file = open(filename, O_RDONLY);

	if (_file == -1)
	{
		free(fdtext);
		return (0);
	}

	num_of_ch = read(_file, fdtext, letters);

	output = write(STDOUT_FILENO, fdtext, num_of_ch);

	close(_file);

	return (output);
}
