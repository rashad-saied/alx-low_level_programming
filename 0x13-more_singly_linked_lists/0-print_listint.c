#include "lists.h"
#include <stdio.h>
/**



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

