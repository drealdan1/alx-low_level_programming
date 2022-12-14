#include "main.h"

/**
 * _isalpha - Code entry.
 *
 * Description: A function that checks for alphabetic character.
 *
 * @c: The integer value it recieves
 *
 * Return: 0
 */
int _isalpha(int c)
{
	char lw_alphabet, cp_alphabet;

	for (lw_alphabet = 'a'; lw_alphabet <= 'z'; lw_alphabet++)
	{
		for (cp_alphabet = 'A'; cp_alphabet <= 'Z'; cp_alphabet++)
		{
			if ((lw_alphabet == c) || (cp_alphabet == c))
			{
				return (1);
			}
		}
	}
	return (0);
