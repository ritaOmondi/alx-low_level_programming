#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - Converts a binary number to unsigned int
 * @b : pointer pointing to string of 0 and 1 char
 *
 *string @b that is not 0 or 1, or if @b is NULL.
 * Return: The converted number, or 0 if there is one or more chars in the
 *         string @b that is not 0 or 1, or if @b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
int a;
unsigned int deci = 0;

if (!b)
{
return (0);
}
for (a = 0; b[a]; a++)
{
if (b[a] < '0' || b[a] > '1')
return (0);
deci = 2 * deci + (b[a] - '0');
}
return (deci);
}
