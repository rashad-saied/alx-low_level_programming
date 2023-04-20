#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print all strings in its arguments
 * @separator: the string separator betwen strings
 * @n: the number of strings to be printed
 * @...: the list of strings
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list pr;
	unsigned int i;
	char *str;

	if (separator == NULL)
		return;
	va_start(pr, n);
	for (i = 0; i < n - 1; i++)
	{
		str = va_arg(pr, char*);
		if (str == NULL)
		{
			printf("nil");
		}
		else
		{
			printf("%s", str);
		}
		printf("%s", separator);
	}
	str = va_arg(pr, char*);
	if (str == NULL)
	{
		printf("nil");
	}
	else
	{
		printf("%s\n", str);
	}
	va_end(pr);
}

