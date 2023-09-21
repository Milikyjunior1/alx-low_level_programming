#include "main.h"
/**
 * append_test_to_file - for appending test to file
 * @filename: the name of file
 * @test_content: the content to append to the file
 * Return: 0
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fdtest, numwri, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	fdtest = open(filename, O_WRONLY | O_APPEND);
	numwri = write(fdtest, text_content, length);

	if (fdtest == -1 || numwri == -1)
		return (-1);

	close(fdtest);

	return (1);
}
