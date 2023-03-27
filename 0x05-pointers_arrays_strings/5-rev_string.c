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
 * rev_string - reverse a string.
 * @s : the char pointer
 *
 * Return: void
 */

void rev_string(char *s)
{
	int length;

	length = _strlen(s);
	char *start = s;
	char *end = s + length - 1;

	while (start < end)
	{
		char temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}

