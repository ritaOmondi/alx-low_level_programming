#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - Function allocates memory of array
 * @nmemb : array of numbers
 * @size : element of array
 * Return: pointer to the allocated memory,
 * NULL if size of nmemb is 0,
 * NULL if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{

	int a = 0, b = 0;
	char *p;

	if (nmemb == 0 || size == 0)
	return (NULL);
	b = nmemb * size;
	p = malloc(b);
	while (a < b)
	{
	p[a] = 0;
	a++;
	}
	return (p);
}
