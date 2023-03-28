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
 * _strcpy - copies the string to the buffer
 * @dest: the buffer pointer
 * @src: the string pointer
 *
 * Return: char pointer
 */

char *_strcpy(char *dest, char *src)
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

