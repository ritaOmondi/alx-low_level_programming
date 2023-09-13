#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - Fuction executes array of elements
 * @array : array of pointer of type int
 * @size : second parameter
 * @action : pointer of function returning a null value
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{

	unsigned int a = 0;

	if (array != NULL && action != NULL && size > 0)
	{
	while (a < size)
	{
	action(array[a]);
	a++;
	}
	}
}
