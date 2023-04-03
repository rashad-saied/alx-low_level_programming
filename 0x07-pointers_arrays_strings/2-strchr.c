#include "main.h"
#include <string.h>

/**
 * _strchr - locates a character in a string
 * @s: pointer to the string
 * @c: the charcter to be located
 *
 * Return: pointer to the first occurence of the character
 */

char *_strchr(char *s, char c)
{
	int i;
	int len;

	len = strlen(s);
	for (i = 0; i <= len; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (NULL);
}

