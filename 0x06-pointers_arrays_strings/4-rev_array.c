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
 * reverse_array - reverse an array
 * @a: an array of integers
 * @n: number of elements
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int *start;
	int *end;

	start = a;
        end = a + n - 1;
	while (start < end)
	{
		char temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}

}

