#include "function_pointers.h"
/**
 * print_name -  function that prints a name
 * @name : first pointer parameter of name printed
 * @f : pointer to a function that returns a null value
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{

	if (name != NULL && f != NULL)
	f(name);
}
