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
 * puts2 - prints every other character of a string,
 * @str : the char pointer
 *
 * Return: void
 */

void puts2(char *str)
{
	int i;
	int length;

	length = _strlen(str);
	for (i = 0; i < length; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

