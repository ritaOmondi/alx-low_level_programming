#include "main.h"
/**
 * _pow_recursion - callculating x to the power of y
 * @x : the base value
 * @y : the exponent value
 * Return : he result of x raised to the power of y.
 */
int _pow_recursion(int x, int y)
{

	if (y < 0)
	return (-1);
	if (y == 0)
	return (1);
	return (x * _pow_recursion(x, y - 1));
}
