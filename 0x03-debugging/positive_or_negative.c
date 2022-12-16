#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main- N is a natural number,print N if number is positive, zero or negative
 *
 * Return: Always (Success)
 */
int positive_or_negative(n)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}

	return ();
}
