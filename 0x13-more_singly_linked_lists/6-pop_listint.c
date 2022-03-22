#include "lists.h"
/**
 * pop_listint - delete head of node
 * @head : pointer to pointer
 * Return: integer
*/
int pop_listint(listint_t **head)
{
	listint_t *a;
	int j;

	j = 0;
	if (head == NULL || *head == NULL)
	{
		a = (*head)->next;
		j = (*head)->n;
		free(*head);
		*head = a;
	}

	return (j);
}

