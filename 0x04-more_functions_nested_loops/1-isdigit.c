#include "main.h"
/**
 * _isdigit - Checks if the character is a digit
 *
 * @c: Variable  declaration int
 *
 * Return: 1 if digit and 0 otherwise
 *
 */
int _isdigit(int c)
{
	int c;

	if (c >= 48 && c <= 71)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
