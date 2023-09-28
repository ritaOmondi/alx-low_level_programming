#include "main.h"
/**
 * set_bit -  sets the value of a bit to 1 at a given index
 * @n : pointer integer
 * @index: index of the bit set to 1
 *
 * Return: 1 for successful operation  or -1,
 * if there is an error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);
*n |= (1UL << index);
return (1);
}
