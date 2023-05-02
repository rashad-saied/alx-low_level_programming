#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * print_list -  prints all the elements of a list_t list.
 * @h: the head node in the linked list
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	if (h == NULL)
		return (0);
	const list_t *curr;
	unsigned int i;
	size_t list_len;
	char *nil;

	nil = "(nil)";
	list_len = 0;
	curr = h;
	while (curr != NULL)
	{
		if (curr->str == NULL)
		{
			_putchar('[');
			_putchar('0');
			_putchar(']');
			_putchar(' ');
			for (i = 0; i < 5; i++)
				_putchar(nil[i]);
			_putchar('\n');
		}
		else
		{
			_putchar('[');
			_putchar(curr->len + '0');
			_putchar(']');
			_putchar(' ');
			for (i = 0; i < curr->len; i++)
			{
				_putchar(curr->str[i]);
			}
			_putchar('\n');
		}
		curr = curr->next;
		list_len++;
	}
	return (list_len);
}

