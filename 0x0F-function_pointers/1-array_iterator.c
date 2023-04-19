#include "function_pointers.h"

/**
 * array_iterator - execute a given function as a parameter
 * on each elements of an array.
 * @array: the array that the given function will e executed on
 * @size: the size of the array
 * @action: a pointer to the function that will be executed on the array
 *
 * Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL || size == 0)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

