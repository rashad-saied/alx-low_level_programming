#include "main.h"

/**
 * put2 - prints every other character of a string.
 * @str : the char pointer
 *
 * Return: void
 */

void put2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}

