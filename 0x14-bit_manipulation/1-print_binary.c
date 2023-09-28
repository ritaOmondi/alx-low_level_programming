#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n : decimal input to be converted to binary
 *
 * Return : nothing
 */
void print_binary(unsigned long int n)
{
int a;
int c = 0;
unsigned long int b;

for (a = 63; a >= 0; a--)
{
b = n >> a;
if (b & 1)
{
_putchar('1');
c++;
}
else if (c)
_putchar('0');
}
if (!c)
_putchar('0');
}
