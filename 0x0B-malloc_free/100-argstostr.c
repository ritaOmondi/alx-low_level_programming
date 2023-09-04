#include "main.h"
#include <stdio.h>
#include<stdlib.h>
/**
 * argstostr - Function concatenates all arg in the program
 * @ac : first int arg concatenated
 * @av : second arg concatenated
 *
 * Return: pointer to new string on success
 * NULL if ac == 0 or av == NULL
 * NULL if ac == 0 or av == NULL
 */
char *argstostr(int ac, char **av)
{

	int a = 0, b = 0, c = 0, d = 0;
	char *s;

	if (ac == 0 || av == NULL)
	return (NULL);
	while (b < ac)
	{
	while (av[b][c])
	{
	a++;
	c++;
	}
	c = 0;
	b++;
	}
	s = malloc((sizeof(char) * a) + ac + 1);
	b = 0;
	while (av[b])
	{
	while (av[b][c])
	{
	s[d] = av[b][c];
	d++;
	c++;
	}
	s[d] = '\n';
	c = 0;
	d++;
	b++;
	}
	d++;
	s[d] = '\0';
	return (s);
}
