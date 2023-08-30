#include "main.h"
/**
 * _pow_recursion - callculating x to the power of y
 * @x - value to multiply
 * @y - the times the number is being multiplied
 * Return - integer value
 */
int _pow_recursion(int x, int y)
{

	if (y < 0)
	return (-1);
	if (y == 0)
	return (1);
	return (x * _pow_recursion(x, y - 1));
}
