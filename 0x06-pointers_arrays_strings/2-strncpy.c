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
 * _strncpy - copies the string to the buffer
 * @dest: the buffer pointer
 * @src: the string pointer
 * @n : numbers of bytes
 * Return: char pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int length;

	length = _strlen(src);

	for (i = 0; i <= length; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

