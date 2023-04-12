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
	int len_s1, len_s2, len_ss;

	if (s1 == NULL)
	{
		s1 = "";
		len_s1 = 0;
	}
	else
	{
		len_s1 = strlen(s1);
	}
	if (s2 == NULL)
	{
		s2 = "";
		len_s2 = 0;
	}
	else
	{
		len_s2 = strlen(s2);
	}
	len_ss = len_s1 + len_s2;
	ss = (char *) malloc(sizeof(char) * (len_ss + 1));
	if (ss == NULL)
		return (NULL);
	strcpy(ss, s1);
	strcat(ss, s2);
	return (ss);
}

