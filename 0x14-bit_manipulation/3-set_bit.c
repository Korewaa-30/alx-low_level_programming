#include "main.h"
#include <stdio.h>

/**
 * set_bit - sets the value of a bit to 1at a given index
 * @n: ...
 * @index: ...
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
