#include "main.h"

/**
 * print_buffer - function that prints the number of bytes from a buffer
 * @b: number of bytes
 * @size: size of the byte
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int i = 0, j;

	if (size < 0)
	{
		return;
	}

	while (i < size)
	{
		if (i % 10 == 0)
			printf("%08x: ", i);
		for (j = i; j < i + 9; j += 2)
		{
			if ((j < size) && ((j + 1) < size))
				printf("%02x: ", b[j + 1]);
			else
			{
				while (++j <= i + 10)
					printf(" ");
				printf(" ");
			}
		}
		for (j = 1; j < i + 9 && j < size; j++)
		{
			if (b[j] >= 32 && b[j] <= 126)
				printf("%c", b[j]);
			else
				printf(" . ");
		}
		i += 10;
	}
}
