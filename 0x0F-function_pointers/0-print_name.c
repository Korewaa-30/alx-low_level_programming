#include "function_pointers.h"

/**
 * print_name - Prints a naame
 * @name: The name to print
 * @f: Pointer to the function
 *
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
