#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @n :  number being searched
 * @index : index of the beat
 *
 * Return:  The value of the bit at the specified index (0 or 1),
 *         or -1 if an error occurred (e.g., index out of range).
 */
int get_bit(unsigned long int n, unsigned int index)
{
int valueB;

if (index > 63)
return (-1);

valueB = (n >> index) & 1;
return (valueB);
}
