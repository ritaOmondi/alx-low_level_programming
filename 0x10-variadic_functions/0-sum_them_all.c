#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - The number of all argumets to sum
 * @n : First parameter to be summed
 * @..... : other variable parameters being summed
 *
 * Return: sum of all the provided arguments
 */
int sum_them_all(const unsigned int n, ...)
{

	va_list a;
	unsigned int b;
	unsigned int sum = 0;

	va_start(a, n);
	for (b = 0; b < n; b++)
	sum += va_arg(a, int);
	va_end(a);
	return (sum);
}
