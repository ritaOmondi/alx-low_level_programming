#include "main.h"
#include <string.h>
/**
 * create_file - function that creates a file
 ** @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
int FileD;
int writting;

if (filename == NULL)
return (-1);
FileD = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
if (FileD == -1)
return (-1);
if (text_content != NULL)
{
writting = write(FileD, text_content, strlen(text_content));
if (writting == -1)
{
close(FileD);
return (-1);
}
}
close(FileD);
return (1);
}
