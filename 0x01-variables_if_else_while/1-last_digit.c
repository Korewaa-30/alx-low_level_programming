#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Determine the last digit stored in the variable
 * Return: Always (Success)
 *
 */

int main(void)

{
	int n, Lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	Lastd = n % 10;

	if (Lastd > 5)
	{
	printf("Last digit of %d is %d and is greater than 5/n", n, Lastd);
	}
	else if (Lastd == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, Lastd);
	}
	else if (Lastd < 6 && Lastd != 0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, Lastd);
	}
	return (0);
}
