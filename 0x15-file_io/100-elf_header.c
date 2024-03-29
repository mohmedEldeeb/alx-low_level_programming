#include <fcntl.h>
#include <elf.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>


void print_class(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void check_elf(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_type(unsigned char *e_ident, unsigned int e_type);
void print_magic(unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void close_elf(int elf);


/**
 * main - Displays the information in the ELF header.
 *
 * @argc: number arguments
 *
 * @argv: An array of pointers to the arguments
 * Return: 0
 *
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int to_open, to_read;

	to_open = open(argv[1], O_RDONLY);
	if (to_open == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf(to_open);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	to_read = read(to_open, header, sizeof(Elf64_Ehdr));
	if (to_read == -1)
	{
		free(header);
		close_elf(to_open);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	check_elf(header->e_ident);
	printf("ELF Header:\n");
	print_magic(header->e_ident);
	print_class(header->e_ident);
	print_data(header->e_ident);
	print_version(header->e_ident);
	print_osabi(header->e_ident);
	print_abi(header->e_ident);
	print_type(header->e_ident, header->e_type);
	print_entry(header->e_entry, header->e_ident);

	free(header);
	close_elf(to_open);
	return (0);
}


/**
 * check_elf - Checks if a file is an ELF file.
 *
 * @e_ident: A pointer to an array containing ELF magic
 * Return: no return
 */

void check_elf(unsigned char *e_ident)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (e_ident[i] != 127 &&
		    e_ident[i] != 'E' &&
		    e_ident[i] != 'L' &&
		    e_ident[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an\n");
			exit(98);
		}
	}
}



/**
 * print_magic - Prints magic numbers of ELF header
 * @e_ident: A pointer array containing the ELF magic
 *
 * Return: no return
 */

void print_magic(unsigned char *e_ident)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", e_ident[i]);
		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}


/**
 * print_class - Prints the class of ELF header
 *
 * @e_ident: pointer to array containing ELF class
 * Return: no
 */

void print_class(unsigned char *e_ident)
{
	printf("  Class:                             ");

	switch (e_ident[EI_CLASS])
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
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}


/**
 * print_version - Prints the version of an ELF header
 *
 * @e_ident: pointer to an array of ELF version
 */

void print_version(unsigned char *e_ident)
{
	printf("  Version:                           %d",
	       e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
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
 * print_data - Prints the data of an ELF header
 *
 * @e_ident: pointer to array containing ELF
 */

void print_data(unsigned char *e_ident)
{
	printf("  Data:                              ");

	switch (e_ident[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}



/**
 * print_osabi - Prints OS/ABI of an ELF header
 * @e_ident: pointer to array containing ELF
 */

void print_osabi(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");

	switch (e_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
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
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}


/**
 * print_type - to Prints the type of ELF header
 *
 * @e_type: ELF type
 * @e_ident: pointer to array containing ELF class
 */

void print_type(unsigned char *e_ident, unsigned int e_type)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("  Type:                              ");

	switch (e_type)
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
		printf("<unknown: %x>\n", e_type);
	}
}


/**
 * print_abi - to Prints the ABI of ELF header
 *
 * @e_ident: pointer to array containing ELF
 */

void print_abi(unsigned char *e_ident)
{
	printf("  ABI Version:                       %d\n",
	       e_ident[EI_ABIVERSION]);
}


/**
 * print_entry - to Prints entry point of an ELF
 *
 * @e_entry: address of the ELF entry point
 * @e_ident: pointer to array containing ELF
 *
 */

void print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("  Entry point address:               ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			  ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", e_entry);
}



/**
 * close_elf - to Closes ELF file
 * @elf: file descriptor for ELF file
 */

void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
		exit(98);
	}

}

