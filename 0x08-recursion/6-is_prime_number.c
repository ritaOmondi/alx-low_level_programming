#include "main.h"
#include <stdio.h>
int check_prime(int n, int a);
int is_prime_number(int n)
{
return (check_prime(n, 1));
}
/**
 *is_prime_number - check if number is prime
 *@n : input integer
 *@a : iteration integer
 * Return - 1 for prime 0 otherwise
 */
int check_prime(int n, int a)
{

	if (n <= 1)
	return (0);
	if (n % a == 0 && a > 1)
	return (0);
	if ((n / a) < a)
	return (1);
	return (check_prime(n, a + 1));
}
