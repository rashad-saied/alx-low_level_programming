#include "main.h"

/**
 * _strlen - the length of a string.
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

/**
 * print_rev - prints a string, in reverse, followed by a new line..
 * @s : the char pointer
 *
 * Return: int
 */

void print_rev(char *s)
{
	int length;
	int i;

	length = _strlen(s);
	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

