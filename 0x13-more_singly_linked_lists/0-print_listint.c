#include "lists.h"
#include <stdio.h>
/**
 * print_listint -  prints all the elements of a listint_t list.
 * @h: the head node of the list
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *curr;
	size_t num;

	curr = h;
	num = 0;
	while (curr != NULL)
	{
		printf("%d\n", curr->n);
		num++;
		curr = curr->next;
	}
	return (num);
}

