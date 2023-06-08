#include "main.h"
#include <stdio.h>

/**
 * flip_bits - returns the number of bits to flip
 * to get from one number to another
 * @n: …
 * @m: …
 *
 * Return: …
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int a;
	unsigned long int b = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		a = b >> i;
		if (a & 1)
			count++;
	}

	return (count);
}
