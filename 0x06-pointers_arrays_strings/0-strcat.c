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
 * _strcat - Concatenates two strings.
 * @dest : the string that will be added to.
 * @src : the string that will be appended.
 *
 * Return: dest.
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int dest_length;
	int src_length;

	dest_length = _strlen(dest);
	src_length = _strlen(src);

	for (i = 0; i <= src_length; i++)
	{
		dest[dest_length] = src[i];
		dest_length++;
	}
	return (dest);
}

