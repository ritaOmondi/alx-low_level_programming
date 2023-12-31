#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point to the program
 * @argc : argument count
 * @argv : argument vector
 *
 * Return: Always (0) success
 */
int main(int argc, char *argv[])
{
int i = 0, j = 0, ret = 0;
	char s;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	s = argv[2][0];
	if (s != '+' && s != '-' && s != '/' && s != '*' && s != '%')
	{
		printf("Error\n");
		exit(99);
	}

	i = atoi(argv[1]);
	j = atoi(argv[3]);
	ret = (get_op_func(argv[2]))(i, j);
	printf("%d\n", ret);
	return (0);
}
