#include "main.h"
#include <stdio.h>

/**
 * get_bit - returns the value of a bit at a given index
 * @n: …
 * @index: …
 *
 * Return: value of the bit or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int i;

	if (index > 63)
		return (-1);

	i = (n >> index) & 1;

	return (i);
}
