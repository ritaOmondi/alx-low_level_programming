#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - a function that concatenates two strings
 * @s1 : firt string to be concatenated
 * @s2 :  second string to be concatenated
 *
 * Return: returns pointer to combo of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{

	int a = 0, b = 0, c = 0, d = 0;
	char *x;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";
	while (s1[a])
	a++;
	while (s2[b])
	b++;
	d = a + b;
	x = malloc((sizeof(char) * d) + 1);
	if (x == NULL)
	return (NULL);
	b = 0;
	while (c < d)
	{
	if (c <= a)
	x[c] = s1[c];
	if (c >= a)
	{
	x[c] = s2[b];
	b++;
	}
	c++;
	}
	x[c] = '\0';
	return (x);
}
