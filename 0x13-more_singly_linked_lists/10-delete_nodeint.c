#include "lists.h"
/**
 * delete_nodeint_at_index - delete the node
 * @head : pointer to pointer
 * @index : unsigned integer
 * Return: void
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *a, *b = *head;
	unsigned int j;

	if (b == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(b);
		return (1);
	}
	for (j = 0; j <  (index - 1); j++)
	{
		if (b->next == NULL)
			return (-1);
		b = b->next;
	}
	a = b->next;
	b->next = a->next;
	free(a);
	return (1);
}
