#include "main.h"
#include <string.h>
/**
 * append_text_to_file - function that appends a text at the end of a file
 * @filename : file pointer variable
 * @text_content : The string to add to the end of the file.
 *  * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int FD;
int written;
int length;

if (filename == NULL)
{
return (-1);
}
if (text_content != NULL)
{
for (length = 0; text_content[length];)
length++;
}
FD = open(filename, O_WRONLY | O_APPEND);
written = write(FD, text_content, length);
if (FD == -1 || written == -1)
{
return (-1);
}
close(FD);
return (1);
}
