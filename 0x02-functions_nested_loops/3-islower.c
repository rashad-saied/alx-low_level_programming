#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: The charachter to check
 *
 * Return: 1 (lowercase) , or 0 (otherwise)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
