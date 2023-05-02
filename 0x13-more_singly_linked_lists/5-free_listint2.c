#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees listint_t list
 * @head: the head node of the list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *curr;
	listint_t *free_node;

	if (head == NULL)
		return;
	curr = *head;
	while (curr != NULL)
	{
		free_node = curr;
		curr = curr->next;
		free(free_node);
	}
	*head = NULL;
}

