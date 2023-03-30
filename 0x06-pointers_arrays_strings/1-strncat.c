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
 * _strncat - Concatenates two strings.
 * @dest : the string that will be added to.
 * @src : the string that will be appended.
 * @n : number of bytes from src.
 *
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int dest_length;

	dest_length = _strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_length + i] = src[i];
	}
	dest[dest_length + i] = '\0';
	return (dest);
}

