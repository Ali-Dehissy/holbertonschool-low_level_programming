#include "lists.h"
/**
 * free_listint - free list
 * @head : pointer
 * Return: new nodes
*/
void free_listint(listint_t *head)
{
	list_int *a;

	if (head != NULL)
		a = head;

	while (a->next != NULL)
	{
		head = a->next;
		free(a);
		a = head;
	}
	free(head);
}
