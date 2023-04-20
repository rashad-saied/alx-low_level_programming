#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a variadic function that sum all its parameter
 * @n: the numbers of integers to sum
 * @...: the integers to sum
 *
 * Return: the sum of all the integers
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list pr;
	unsigned int i;
	unsigned int sum;

	va_start(pr, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(pr, unsigned int);
	}
	va_end(pr);
	return (sum);
}

