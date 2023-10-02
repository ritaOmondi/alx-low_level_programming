#include "main.h"
#include <stdlib.h>
#include<stdio.h>
/**
 *read_textfile -  function reads textfile, prints to standard output,
 *to the POSIX.
 *@filename : pointer variable
 * @letters : number of characters to be read and printed
 * Return: writing- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t File_Descriptor;
char *buffer;
ssize_t reading;
ssize_t writing;

File_Descriptor = open(filename, O_RDONLY);
if (filename == NULL)
return (0);
buffer = malloc(sizeof(char) * letters);
reading = read(File_Descriptor, buffer, letters);
writing = write(STDOUT_FILENO, buffer, reading);
free(buffer);
close(File_Descriptor);
return (writing);
}
