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
 * puts_half - print the second haif of a string.
 * @str : char pointer
 *
 * Return : Void
 */

void puts_half(char *str)
{
	int length;
	int middle_index;
	int i;

	length = _strlen(str);
	if (length % 2 != 0)
	{
		middle_index = (length - 1) / 2;
	}
	else
	{
		middle_index = length / 2;
	}
	for (i = middle_index; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

