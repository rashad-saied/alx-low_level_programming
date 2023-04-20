#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * print_all - prints anything passed as an argument
 * @format: a string of types list
 * @...: the list of elements to be printed
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int format_len, j;
	char *str;
	va_list ap;

	while (format == NULL)
	{
		return;
	}
	format_len = strlen(format);
	va_start(ap, format);
	j = 0;
	while (j < format_len)
	{
		switch (format[j])
		{
			case 'c':
				printf("%c", (char)va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				str = va_arg(ap, char*);
				if (str == NULL)
					printf("(nil)");
				printf("%s", str);
				break;
			default:
				break;
		}
		if (j < format_len - 1 && (format[j] == 'c' ||
			format[j] == 'i' || format[j] == 'f' || format[j] == 's'))
			printf(", ");
		j++;
	}
	va_end(ap);
	printf("\n");
}

