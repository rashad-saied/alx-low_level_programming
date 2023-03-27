#include "main.h"

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
	for (i = length; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

