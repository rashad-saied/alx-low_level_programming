#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the last string
 *
 * Return: a pointer to the new string
 */

char *str_concat(char *s1, char *s2)
{
	char *ss;
	int len_s1, len_s2, len_ss, i, j;

	if (s1 == NULL)
	{
		s1 = (char *) malloc(sizeof(char));
		*s1 = '\0';
	}
	else if (s2 == NULL)
	{
		s2 = (char *) malloc(sizeof(char));
		*s2 = '\0';
	}
	len_s1 = strlen(s1);
	len_s2 = strlen(s2);
	len_ss = len_s1 + len_s2;
	ss = (char *) malloc(sizeof(char) * (len_ss + 1));
	if (ss == NULL)
		return (NULL);
	for (i = 0; i < len_s1; i++)
	{
		ss[i] = s1[i];
	}
	for (j = 0; j <= len_s2; j++)
	{
		ss[i] = s2[j];
		i++;
	}
	return (ss);
}

