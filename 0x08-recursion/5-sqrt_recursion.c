#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: number to calculate the square root
 *
 * Return: integer value
 */

int _sqrt_recursion(int n)
{
	return (actual_sqrt_recursion(n, 1));
}

/**
 * actual_sqrt_recursion - Calculates the natural square root of a number
 * @n: number to calculate the square root
 * @i: iterate number
 * Return: integer value
 */

int actual_sqrt_recursion(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);

	return (actual_sqrt_recursion(n, i + 1));
}
