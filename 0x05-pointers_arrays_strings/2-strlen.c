#include "main.h"

/**
 * _strlen - swaps the values of two integers.
 * @s : the char pointer
 *
 * Return: int
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

