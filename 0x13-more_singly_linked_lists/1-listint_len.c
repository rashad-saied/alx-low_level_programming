#include "lists.h"

/**
 * listint_len - the number of  elements in a linked list.
 * @h: the head node in the linked list
 *
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	const list_t *curr;
	size_t num;

	if (h == NULL)
		return (0);
	num = 0;
	curr = h;
	while (curr != NULL)
	{
		num++;
		curr = curr->next;
	}
	return (num);
}

