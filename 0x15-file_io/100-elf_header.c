#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void ch_elf(unsigned char *e_i);
void magic(unsigned char *e_i);
void class(unsigned char *e_i);
void data(unsigned char *e_i);
void version(unsigned char *e_i);
void abi(unsigned char *e_i);
void osabi(unsigned char *e_i);
void type(unsigned int e_t, unsigned char *e_i);
void entry(unsigned long int e_e, unsigned char *e_i);
void clo_elf(int elf);

/**
 * ch_elf - to Checks if a file is an ELF file.
 * @e_i: A pointer to arr containing the ELF magic numbers.
 *
 * Description: If file is not an ELF file - exit (98).
 */
void ch_elf(unsigned char *e_i)
{
	int ind;

	for (ind = 0; ind < 4; ind++)
	{
		if (e_i[ind] != 127 &&
		    e_i[ind] != 'E' &&
		    e_i[ind] != 'L' &&
		    e_i[ind] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * magic - Prints magic numbers of ELF header.
 * @e_i: A pointer to array having the ELF magic numbers.
 *
 * Description: Magic numbers are separated with spaces.
 */
void magic(unsigned char *e_i)
{
	int ind;

	printf("  Magic:   ");

	for (ind = 0; ind < EI_NIDENT; ind++)
	{
		printf("%02x", e_i[ind]);

		if (ind == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * class - Print class of ELF header.
 * @e_i: A pointer to array having the ELF class.
 */
void class(unsigned char *e_i)
{
	printf("  Class:                             ");

	switch (e_i[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", e_i[EI_CLASS]);
	}
}

/**
 * data - Print data of ELF header.
 * @e_i: A pointer to array having the ELF class.
 */
void data(unsigned char *e_i)
{
	printf("  Data:                              ");

	switch (e_i[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", e_i[EI_CLASS]);
	}
}

/**
 * version - Print version ELF header.
 * @: A pointer to an array containing the ELF version.
 */
void version(unsigned char *e_i)
{
	printf("  Version:                           %d",
	       e_i[EI_VERSION]);

	switch (e_i[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * osabi - Print OS/ABI of ELF header.
 * @e_i: A pointer to array having ELF version.
 */
void osabi(unsigned char *e_i)
{
	printf("  OS/ABI:                            ");

	switch (e_i[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", e_i[EI_OSABI]);
	}
}

/**
 * abi - Print ABI version of ELF header.
 * @e_i: A pointer to array having ELF ABI version.
 */
void abi(unsigned char *e_i)
{
	printf("  ABI Version:                       %d\n",
	       e_i[EI_ABIVERSION]);
}

/**
 * type - Print type of ELF header.
 * @e_t: ELF type.
 * @e_i: A pointer to  array having the ELF class.
 */
void type(unsigned int e_t, unsigned char *e_i)
{
	if (e_i[EI_DATA] == ELFDATA2MSB)
		e_t >>= 8;

	printf("  Type:                              ");

	switch (e_t)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", e_t);
	}
}

/**
 * entry - Print the entry point of ELF header.
 * @e_e: address of ELF entry point.
 * @e_i: pointer to array having the ELF class.
 */
void entry(unsigned long int e_e, unsigned char *e_i)
{
	printf("  Entry point address:               ");

	if (e_i[EI_DATA] == ELFDATA2MSB)
	{
		e_e = ((e_e << 8) & 0xFF00FF00) |
			  ((e_e >> 8) & 0xFF00FF);
		e_e = (e_e << 16) | (e_e >> 16);
	}

	if (e_i[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_e);

	else
		printf("%#lx\n", e_e);
}

/**
 * clos_elf - Close ELF file.
 * @elf: The file descriptor of the ELF file.
 *
 * Description: If the file cannot be closed - exit code 98.
 */
void clo_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - Display the info contained in the
 *        ELF header at the start of an ELF file.
 * @argc: The number of args supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the file is not ELF File or
 *              the function fails - exit code 98.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *head;
	int fdtest, re;

	fdtest = open(argv[1], O_RDONLY);
	if (fdtest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	head = malloc(sizeof(Elf64_Ehdr));
	if (head == NULL)
	{
		clo_elf(fdtest);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	re = read(fdtest, head, sizeof(Elf64_Ehdr));
	if (re == -1)
	{
		free(head);
		clo_elf(fdtest);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	ch_elf(head->e_i);
	printf("ELF Header:\n");
	magic(head->e_i);
	class(head->e_i);
	data(head->e_i);
	version(head->e_i);
	osabi(head->e_i);
	abi(head->e_i);
	type(head->e_t, head->e_i);
	entry(head->e_e, head->e_i);

	free(head);
	clo_elf(fdtest);
	return (0);
}
