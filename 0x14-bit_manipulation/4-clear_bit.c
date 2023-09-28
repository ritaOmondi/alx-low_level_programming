#include "main.h"

/**
 * clear_bit - Function sets the value of a given bit to 0
 * @n: pointer input value
 * @index: index of the bit to be cleared
 *
 * Return: 1 for success or  -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	return (-1);

	*n &= ~(1UL << index);
	return (1);
}


