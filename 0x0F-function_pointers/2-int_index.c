#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - Function that searches for an integer in an array
 * @array: The array to search in
 * @size: The number of elements in the array
 * @cmp: A pointer to the function used to compare values
 *
 * Return: Index of the first element whichcmp function returns non-zero,
 * or -1 if no element matches or if size is 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{

	int a = 0;

	if (size > 0)
	{
	if  (array != NULL && cmp != NULL)
	{
	while (a < size)
	{
	if (cmp(array[a]))
	return (a);
	a++;
	}
	}
	}
	return (-1);
}
