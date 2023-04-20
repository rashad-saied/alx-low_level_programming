#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print numbers followed by a new line
 * @separator: the string separator between numbers
 * @n: the number of integers to be printed
 * @...: the list of numbers to be printed
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	if (separator == NULL)
		return;
	va_start(ap, n);
	for (i = 0; i < (n - 1); i++)
	{
		printf("%d%s", va_arg(ap, unsigned int), separator);
	}
	printf("%d\n", va_arg(ap, unsigned int));
	va_end(ap);
}

