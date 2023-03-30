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
 * _strcmp - compare two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: char pointer
 */

int _strcmp(char *s1, char *s2)
{
	int s1_len = _strlen(s1);
	int s2_len = _strlen(s2);

	return (s1_len - s2_len);
}

