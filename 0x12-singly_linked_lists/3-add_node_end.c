#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - add a new node to the end of a list
 * @head: a pointer to the head node
 * @str: the string to be duplicated in the new node
 *
 * Return: the address of the new elemnt
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *curr;

	if (str == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		curr = *head;
		while (curr->next != NULL)
		{
			curr = curr->next;
		}
	}
	curr->next = new_node;
	return (new_node);
}

