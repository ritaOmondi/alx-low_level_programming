#include <elf.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#define ELF_HEADER_SIZE 64
void elf_header(const Elf64_Ehdr *header);
int main(int argc, char *argv[]);
/**
 * elf_header - Function that displays the content of ELF header
 * @header : pointer variable
 *
 * Return : Nothing
 */
void elf_header(const Elf64_Ehdr *header)
{
int x;

printf("Magic: ");
for (x = 0; x < EI_NIDENT;)
{
x++;
printf("%02x", header->e_ident[x]);
}
printf("\n");
printf("Class:%s\n", (header->e_ident[EI_CLASS] == ELFCLASS32) ? "ELF32" : "ELF64");
printf("Data:%s\n", (header->e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little-endian" : "2's complement, big-endian");
printf("Version: %d\n", header->e_ident[EI_VERSION]);
printf("OS/ABI: %d\n", header->e_ident[EI_OSABI]);
printf("ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);
printf("Type: %d\n", header->e_type);
printf("Entry point address:0x%lx\n", header->e_entry);
}
/**
 * main - Entry point
 * @argc : argument count
 * @argv : argument vector
 *
 * Return ; Always 0 success
 */
int main(int argc, char *argv[])
{
Elf64_Ehdr header;
int fileD;

if (argc != 2)
{
dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
exit(98);
}
fileD = open(argv[1], O_RDONLY);
if (fileD == -1)
{
dprintf(STDERR_FILENO, "Error: Can't open file %s\n", argv[1]);
exit(98);
}
if (read(fileD, &header, ELF_HEADER_SIZE) != ELF_HEADER_SIZE)
{
dprintf(STDERR_FILENO, "Error: Unable to read elf file %s\n", argv[1]);
close(fileD);
exit(98);
}
if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 ||
header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
{
dprintf(STDERR_FILENO, "Error: %s is not an ELF file\n", argv[1]);
close(fileD);
return (98);
}
close(fileD);
return (0);
}
