#include <stdio.h>

/**
 * main - outputs the lowercase of the  alphabet in reverse order.
 *
 * Return: Always 0.
 */
int main(void)
{
	char alph;

	for (alph = 'z'; alph >= 'a'; alph--)
		putchar(alph);

	putchar('\n');

	return (0);
}
