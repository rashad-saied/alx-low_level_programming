#include "function_pointers.h"

/**
 * print_name - prints a given name
 * @name: the given name
 * @f: a pointer to a function that takes a char pointer as an argument
 *
 * Return: void
*/

void print_name(char *name, void (*f)(char *s))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}

