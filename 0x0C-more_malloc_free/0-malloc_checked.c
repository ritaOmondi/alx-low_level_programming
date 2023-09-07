#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - Function allocates memory using malloc
 * @b : positive int to be assigned memory
 *
 * Return: a pointer to the allocated memory,
 * if malloc fails normal process termination,
 * with status value of exit 98
 */
void *malloc_checked(unsigned int b)
{

	void *p;

	p = malloc(b);
	if (p == NULL)
	exit(98);
	return (p);
}
