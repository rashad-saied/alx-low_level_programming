#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - delete the head node from the list
 * @head: the head node
 *
 * Return: the value of the head node
 */

int pop_listint(listint_t **head)
{
	listint_t *curr;

	if (*head == NULL)
		return (0);
	curr = *head;
	*head = (*head)->next;
	free(curr);
	return (curr->n);
}

