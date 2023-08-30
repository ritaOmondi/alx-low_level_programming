#include "main.h"
/**
 * _strlen_recursion - Function that calculates the length of,
 * of a string using recursion.
 * @s : The string for which to calculate the length.
 *
 * Return : The length of the string.
 */
int _strlen_recursion(char *s)
{

	if (*s == '\0')
	return (0);
	else
	return (1 + _strlen_recursion(s + 1));
}
int compare(char *s, int p1, int p2)
{

	if (*(s + p1) == *(s + p2))
	{
	if (p1 == p2 || p1 == p2 + 1)
	return (1);
	return (0 + compare(s, p1 + 1, p2 - 1));
	}
	return (0);
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s : input string
 * Return - 1 if string is a palindrom otherwise 0
 */
int is_palindrome(char *s)
{

	if (*s == '\0')
	return (1);
	return (compare(s, 0, _strlen_recursion(s) - 1));
}
