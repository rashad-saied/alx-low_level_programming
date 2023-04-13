#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the first elements of s2 string
 *
 * Return: a pointer to the new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newString;
	unsigned int s1_len, s2_len, total_length, i;

	if (s1 == NULL)
	{
		s1 = "";
		s1_len = 0;
	}
	else
	{
		s1_len = strlen(s1);
	}
	if (s2 == NULL)
	{
		s2 = "";
		s2_len = 0;
	}
	else
	{
		s2_len = strlen(s2);
	}
	total_length = s1_len + s2_len;
	newString = malloc((sizeof(*newString) * total_length) + 1);
	if (newString == NULL)
		return (NULL);
	newString = strcpy(newString, s1);
	if (n >= s2_len)
	{
		for (i = 0; i <= s2_len; i++)
		{
			newString[s1_len] = s2[i];
			s1_len++;
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			newString[s1_len] = s2[i];
			s1_len++;
		}
	}
	return (newString);
}

