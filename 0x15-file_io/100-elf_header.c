#include "main.h"
#include <elf.h>
#include <fcntl.h>
#include <sys/stat.h>

#define ELF_IDENT_SIZE 16
#define BUFSIZE 1024

/**
 * check_elf - a function that checks if a file is an elf file
 * @buf: ELF details
 * Return: ELF
 */

int check_elf(unsigned char *buf)
{
	return (buf[0] == 0x7f && buf[1] == 'E' && buf[2] == 'L' && buf[3] == 'F');
}
/**
 * display_elf_header - a function that prints the elf header
 * @ehdr: section of elf
 * Return: Void
 */

void display_elf_header(Elf32_Ehdr *ehdr)
{
	int i;

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < ELF_IDENT_SIZE; i++)
	{
		printf("%02x ", ehdr->e_ident[i]);
	}
	printf("\n");
	printf("  Class:                             %s\n", ehdr->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
	printf("  Data:                              %s\n", ehdr->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
	printf("  Version:                           %d (current)\n", ehdr->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %s\n", ehdr->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "Other");
	printf("  ABI Version:                       %d\n", ehdr->e_ident[EI_ABIVERSION]);
	printf("  Type:                              %s\n", (ehdr->e_type == ET_EXEC) ? "EXEC (Executable file)" :
			(ehdr->e_type == ET_DYN) ? "DYN (Shared object file)" :
			(ehdr->e_type == ET_REL) ? "REL (Relocatable file)" : "Other");
	printf("  Entry point address:               %#x\n", ehdr->e_entry);
}

/**
 * main - a program that prints the elf header file
 * @argc: the number of arguments
 * @argv: the arguments
 * Return: Success (0)
 */

int main(int argc, char *argv[])
{
	int file_des;
	unsigned char buf[ELF_IDENT_SIZE];
	Elf32_Ehdr ehdr;

	if (argc != 2)
	{
		    dprintf(STDERR_FILENO, "Error: Invalid number of arguments\nUsage: %s elf_file\n", argv[0]);
		        return (98);
	}
	if (!check_elf(buf))
	{
		    dprintf(STDERR_FILENO, "Error: %s is not an ELF file\n", argv[1]);
	}
	file_des = open(argv[1], O_RDONLY);
	if (file_des == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", argv[1]);
		return 98;
	}
	if (read(file_des, &ehdr, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		dprintf(STDERR_FILENO, "Error: Can't read ELF header from file %s\n", argv[1]);
		return 98;
	}
	display_elf_header(&ehdr);
	if (close(file_des) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file descriptor %d\n", file_des);
		return 100;
	}
	return (0);
}
