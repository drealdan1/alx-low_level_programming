#include <stdio.h>
/**
 * main - two different comb with a preceeding zero
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 48, j = 48, k = 48, l = 49;

	while (i < 58)
	{
		while (j < 58)
		{
			while (k < 58)
			{
				while (l < 58)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (!(i == 57 &&
						j == 56 &&
						k == 57 &&
						l == 57))
					{
						putchar(',');
						putchar(' ');
					}
					l++;
				}
				k++;
				l = 48;
			}
			j++;
			k = i;
			l = j + 1;
		}
		i++;
		j = 48;
		k = i;
		l = j + 1;
	}
	putchar('\n');
	return (0);
}
