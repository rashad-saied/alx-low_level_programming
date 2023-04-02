#include "main.h"

/**
 * _isdigit - checks for a digit (0 to 9)
 * @c: the digit to be checked
 *
 * Return: integer (0 or 1)
 */

int _isdigit(int c)
{
	if (c >= 48 && c < 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

