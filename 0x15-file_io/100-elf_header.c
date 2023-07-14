#include "main.h"
/**
*displayError - it displays an error message
*@info: the error to display
*/
void displayError(const char *info)
{
	fprintf(stderr, "%s\n", info);
	exit(98);
}
/**
*displayElfHeader - displays the header
*@elfHeader: the header to be displayed
*/
void displayElfHeader(const Elf64_Ehdr *elfHeader)
{
	printf("Elf Header:\n");
	printf(" Magic: %02x %02x %02x %02x\n", elfHeader->e_ident[EI_MAG0], elfHeader->e_ident[EI_MAG1], elfHeader->e_ident[EI_MAG2], elfHeader->e_ident[EI_MAG3]);
	printf("Class:   ");
	switch (elfHeader->e_ident[EI_CLASS])
	{
		case ELFCLASS32:
			printf("Elf32\n");
			break;
		case ELFCLASS64:
			break;
			printf("Elf64\n");
			break;
		default:
			printf("Invalid class\n");
			break;
	}
	printf(" Version:     %d (current)\n", elfHeader->e_ident[EI_VERSION]);
	printf(" OS/ABI:      ");

	switch (elfHeader->e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		default:
			printf("Unknown OS/ABI\n");
			break;
	}
	printf(" ABI Version:    %d\n", elfHeader->e_ident[EI_ABIVERSION]);
	printf(" Type:           ");
	switch (elfHeader->e_type)
	{
		case ET_NONE:
			printf("No file type\n");
			break;
		case ET_REL:
			printf("Relocatable file\n");
			break;
		case ET_EXEC:
			printf("Executable file\n");
			break;
		case ET_DYN:
			printf("Shared object file\n");
			break;
		case ET_CORE:
			printf("Core file\n");
			break;
		default:
			printf("Unknown type\n");
			break;
	}
	printf(" Entry point address: 0x%lx\n", elfHeader->e_entry);
}
/**
*main - entry point
*@argc: the argument count
*@argv: the argument vector
*Return: 0
*/
int main(int argc, char **argv)
{
	const char *filename;
	Elf64_Ehdr elfHeader;
	int fd;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return (98);
	}
	filename = argv[1];
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		displayError("Error opening file");
	}
	if (read(fd, &elfHeader, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		displayError("Error reading Elf header");
	}
	if (elfHeader.e_ident[EI_MAG0] != ELFMAG0 || elfHeader.e_ident[EI_MAG1] != ELFMAG1 || elfHeader.e_ident[EI_MAG2] != ELFMAG2 || elfHeader.e_ident[EI_MAG3] != ELFMAG3)
	{
		displayError("Not an Elf file");
	}
	displayElfHeader(&elfHeader);
	close(fd);
	return (0);
}
