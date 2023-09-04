#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars, initialized with a specific char
 * @size: the size of the array
 * @c: the char to initialize the array with
 * Return: pointer to the created array, or NULL if size is 0
 */
char *create_array(unsigned int size, char c)
{

	unsigned int a;
	char *b;

	if (size == 0)
	return (NULL);
	b = malloc(size * sizeof(char));
	if (b == NULL)
	return (NULL);
	for (a = 0; a < size; a++)
	{
	b[a] = c;
	}
	return (b);
}
