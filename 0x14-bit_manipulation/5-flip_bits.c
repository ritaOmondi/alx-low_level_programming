#include "main.h"

/**
 * flip_bits - function tha returns number of bits beeded to flip
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int a;
int b = 0;
unsigned long int c;
unsigned long int exe = n ^ m;

for (a = 63; a >= 0; a--)
{
c = exe >> a;
if (c & 1)
b++;
}
return (b);
}
