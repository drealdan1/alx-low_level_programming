#include <stdio.h>

/**
 * main - outputs all the numbers of base 16 in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	int number;
	char alph;

	for (number = 0; number < 10; number++)
		putchar((number % 10) + '0');

	for (alph = 'a'; alph <= 'f'; alph++)
		putchar(alph);

	putchar('\n');

	return (0);
}
