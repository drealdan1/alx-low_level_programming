#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase(a-z), and then in uppercase(A-Z).
 *
 * Return: Always 0.
 */
int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
		putchar(alph);

	for (alph = 'A'; alph <= 'Z'; alph++)
		putchar(alph);

	putchar('\n');

	return (0);
}
