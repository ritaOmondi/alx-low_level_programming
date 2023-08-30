#include "main.h"
#include <stdio.h>
int _sqrt(int n, int a);
/**
 * _sqrt - Helper function to calculate the square root using recursion.
 * @n: The number for which to calculate the square root.
 * @a: The current approximation of the square root.
 *
 * Return: The calculated square root.
 */
int _sqrt_recursion(int n)
{
return (_sqrt(n, 1));
}
/**
 * _sqrt_recursion - Returns the natural square root of a number
 *@n : number the square root is being calculated
 *a : iterate number
 *Return - natural square root
 */
int _sqrt(int n, int a)
{

	int sqrt = a * a;

	if (sqrt > n)
	return (-1);
	if (sqrt == n)
	return (a);
	return (_sqrt(n, a + 1));
}
