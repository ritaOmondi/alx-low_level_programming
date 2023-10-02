#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_buffer - function that allocates 1024 bytes for a buffer.
 * @file: name of the file
 *
 * Return: pointer to the buffer
 */
char *create_buffer(char *file)
{
char *buff;

buff = malloc(sizeof(char) * 1024);
if (buff == NULL)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
exit(99);
}
return (buff);
}

/**
 * close_file - CFunction that loses file descriptors.
 * @fd: file descripto
 *
 * Return: Nothing
 */
void close_file(int fd)
{
int x;

x = close(fd);

if (x == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}

/**
 * main - Functio that Copies the content of a file to another.
 * @argc :argument count
 * @argv : argument vector
 *
 * Return: Alway (0) on success.
 *
 */
int main(int argc, char *argv[])
{
int src_file, dest_file, reading, writing;
char *buffer;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
buffer = create_buffer(argv[2]);
src_file = open(argv[1], O_RDONLY);
reading = read(src_file, buffer, 1024);
dest_file = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

do {
if (src_file == -1 || reading == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
writing = write(dest_file, buffer, reading);
if (dest_file == -1 || writing == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}

reading = read(src_file, buffer, 1024);
dest_file = open(argv[2], O_WRONLY | O_APPEND);
} while
(reading > 0);
{
free(buffer);
close_file(src_file);
close_file(dest_file);
}
return (0);
}

