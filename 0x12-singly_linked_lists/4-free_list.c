#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees list_t list
 * @head: the head node of the list
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *curr;
	list_t *free_node;

	if (head == NULL)
		return;
	curr = head;
	while (curr != NULL)
	{
		free_node = curr;
		curr = curr->next;
		free(free_node);
	}
	head = NULL;
}

