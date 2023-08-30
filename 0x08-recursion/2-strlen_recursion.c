#include "main.h"
/**
 * _strlen_recursion - Function that calculates the length of a string
 * @s : The string for which to calculate the length.
 *
 * Return - Always 0 success
 */
int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
	return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);

}
