#include "main.h"
/**
 * get_endianness - Function that checks the endianness
 *
 * Return: 0 if big, 1 if little.
 */
int get_endianness(void)
{
unsigned int a = 1;
char *b = (char *) &a;

return ((*b == 1) ? 1 : 0);
}
