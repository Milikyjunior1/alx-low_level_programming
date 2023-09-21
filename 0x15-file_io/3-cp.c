#include "main.h"
char *size_buf(char *fle);
void clos_file(int fdtest);

/**
 * size_buf - malloc needed  bytes for a buffer.
 * @fle: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *size_buf(char *fle)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", fle);
		exit(99);
	}

	return (buf);
}

/**
 * clos_file - Closes file descriptors.
 * @fdtest: The file descriptor to be closed.
 */
void clos_file(int fdtest)
{
	int end;

	end = close(fdtest);

	if (end == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdtest);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 *              If file_from does not exist or cannot be read - exit code 98.
 *              If file_to cannot be created or written to - exit code 99.
 *              If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int fr, fi, re, wr;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = size_buf(argv[2]);
	fr = open(argv[1], O_RDONLY);
	re = read(fr, buf, 1024);
	fi = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (fr == -1 || re == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}

		wr = write(fr, buf, re);
		if (fi == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}

		re = read(fr, buf, 1024);
		fi = open(argv[2], O_WRONLY | O_APPEND);

	} while (re > 0);

	free(buf);
	clos_file(fr);
	clos_file(fi);

	return (0);
}
