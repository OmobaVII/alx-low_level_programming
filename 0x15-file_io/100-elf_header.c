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

void display_elf_header(Elf64_Ehdr *ehdr)
{
	int i;

	printf("ELF Header:\n");
	printf("Magic:");
	for (i = 0; i < ELF_IDENT_SIZE; i++)
	{
		printf("%02x", ehdr->e_ident[i]);
	}
	printf("\n");
	printf(" Class:ELF%d\n", ehdr->e_ident[4]);
	printf(" Data: 2's complement, little endian\n");
	printf(" Version: %d\n", ehdr->e_ident[6]);
	printf(" OS/ABI: UNIX - System V\n");
	printf(" ABI Version: %d\n", ehdr->e_ident[8]);
	printf(" Type: %hu\n", ehdr->e_type);
	printf(" Machine: %hu\n", ehdr->e_machine);
	printf(" Version: %d\n", ehdr->e_version);
	printf(" Entry point address: 0x%0lx\n", ehdr->e_entry);
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
	struct stat st;
	unsigned char buf[ELF_IDENT_SIZE];

	if (argc != 2)
	{
		    dprintf(STDERR_FILENO, "Error: Invalid number of arguments\nUsage: %s elf_file\n", argv[0]);
		        return 98;
	}

	file_des = open(argv[1], O_RDONLY);
	if (file_des == -1)
	{
		    dprintf(STDERR_FILENO, "Error: Can't open file %s\n", argv[1]);
		        return 98;
	}

	if (fstat(file_des, &st) == -1 || !S_ISREG(st.st_mode))
	{
		    dprintf(STDERR_FILENO, "Error: %s is not a regular file\n", argv[1]);
		        return 98;
	}

	if (read(file_des, buf, ELF_IDENT_SIZE) != ELF_IDENT_SIZE)
	{
		    dprintf(STDERR_FILENO, "Error: Can't read ELF header from file %s\n", argv[1]);
		        return 98;
	}
	if (!check_elf(buf))
	{
		    dprintf(STDERR_FILENO, "Error: %s is not an ELF file\n", argv[1]);
	}
	if (close(file_des) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file descriptor %d\n", file_des);
		return 100;
	}

	fd = open(argv[1], O_RDONLY);
	if (file_des == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", argv[1]);
		return 98;
	}

	Elf64_Ehdr ehdr;
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
