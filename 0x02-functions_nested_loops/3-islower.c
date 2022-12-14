#include "main.h"

/**
 * _islower - source code goes here
 *
 * Description: This program checks for lowercase character.
 *
 * The integer value it recieves
 *
 * Return: 0
 */
int _islower(int c)
{
	int i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
		{
			return (1);
		}

	}
	return (0);
}
