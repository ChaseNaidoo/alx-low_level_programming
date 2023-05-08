#include "main.h"

#define BUFFER_SIZE 1024


void print_error(char *message)
{
	fprintf(stderr, "Error: %s\n", message);
	exit(98);
}

void print_header(Elf64_Ehdr *header)
{
	int i;

	printf("ELF Header:\n");
	printf("  Magic:   ");

	for (i = 0; i < EI_NIDENT; i++)
	{
	printf("%02x ", header->e_ident[i]);
	}
	printf("\n");
	printf("  Class:			     %s\n", header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
	printf("  Data:				     %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
	printf("  Version:                           %d%s\n", header->e_ident[EI_VERSION], header->e_ident[EI_VERSION] == EV_CURRENT ? " (current)" : "");
	printf("  OS/ABI:                            %d\n", header->e_ident[EI_OSABI]);
	printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
	printf("  Type:                              %d\n", header->e_type);
	printf("  Entry point address:               0x%lx\n", header->e_entry);
}

int main(int argc, char **argv)
{
	Elf64_Ehdr header;
	ssize_t bytes_rd;
	char *filename;
	int fd;

	if (argc != 2)
	{
	print_error("Usage: elf_header elf_filename");
	}
	filename = argv[1];

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
	print_error("Can't open file");
	}
	bytes_rd = read(fd, &header, sizeof(header));

	if (bytes_rd != sizeof(header))
	{
	print_error("Can't read ELF header");
	}
	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
		header.e_ident[EI_MAG1] != ELFMAG1 ||
		header.e_ident[EI_MAG2] != ELFMAG2 ||
		header.e_ident[EI_MAG3] != ELFMAG3)
	{
	print_error("File is not an ELF file");
	}
	print_header(&header);
	close(fd);
	return (0);
}
