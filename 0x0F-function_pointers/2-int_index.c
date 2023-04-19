#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer in an array
 * @array: an integer array pointer taht will be searched
 * @size: the size of the array
 * @cmp: a pointer to the function that will compare the integer
 *
 * Return: the array element index of the integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
		else
		{
			continue;
		}
	}
	return (-1);
}

