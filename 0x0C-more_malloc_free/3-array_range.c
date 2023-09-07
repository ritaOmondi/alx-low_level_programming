#include "main.h"
#include <stdlib.h>
/**
 * array_range - function creates array of integers
 * @min : minimum integer
 * @max : maximum integer
 * Return: pointer to the newly created array,
 * NULL if min > max
 */
int *array_range(int min, int max)
{

	int *a, i = 0, size;

	if (min > max)
	return (NULL);
	size = max - min + 1;
	a = malloc((sizeof(int) * (max - min)) + sizeof(int));
	if (a == NULL)
	return (NULL);
	for (; i < size; i++)
	a[i] = min++;
	return (a);
}
