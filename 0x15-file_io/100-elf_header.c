#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <elf.h>

/**
 * error_exit - Prints the error message to stderr and
 * exits the program with the given code
 * @code: Exit code
 * @message: Error message to print
 */
void error_exit(int code, const char *message)
{
fprintf(stderr, "%s\n", message);
exit(code);
}
/**
 * display_elf_header_info - Displays the information
 * contained in the ELF header
 * @header: Pointer to the ELF header structure
 */
void display_elf_header_info(Elf64_Ehdr *header)
{
printf("Magic:   ");
for (int i = 0; i < EI_NIDENT; i++)
printf("%02x ", header->e_ident[i]);
printf("\nClass:%d-bit\n", (header->e_ident[EI_CLASS] == ELFCLASS32) ? 32 : 64);
printf("Data:%s\n", (header->e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little endian" : "2's complement, big endian");
printf("Version: %d (current)\n", header->e_ident[EI_VERSION]);
printf("OS/ABI:  %d\n", header->e_ident[EI_OSABI]);
printf("ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);
printf("Type:    ");
switch (header->e_type)
{
case ET_NONE:
printf("NONE (No file type)\n");
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
printf("Unknown\n");
break;
}
printf("Entry point address: 0x%lx\n", header->e_entry);
}
/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 * Return: 0 on success, or the appropriate
 * error code on failure
 */
int main(int argc, char *argv[])
{
int fd;
Elf64_Ehdr header;
if (argc != 2)
error_exit(98, "Usage: elf_header elf_filename");
fd = open(argv[1], O_RDONLY);
if (fd == -1)
error_exit(98, "Error: Unable to open the file");
if (read(fd, &header, sizeof(header)) != sizeof(header))
{
close(fd);
error_exit(98, "Error: Unable to read the ELF header");
}
if (!(header.e_ident[EI_MAG0] == ELFMAG0 &&
header.e_ident[EI_MAG1] == ELFMAG1 &&
header.e_ident[EI_MAG2] == ELFMAG2 &&
header.e_ident[EI_MAG3] == ELFMAG3))
{
close(fd);
error_exit(98, "Error: Not an ELF file");
}
display_elf_header_info(&header);
close(fd);
return (0);
}

