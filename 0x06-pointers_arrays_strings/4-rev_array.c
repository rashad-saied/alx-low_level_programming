#include "main.h"

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

