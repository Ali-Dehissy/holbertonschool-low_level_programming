#include "lists.h"
/**
 * free_listint - free list
 * @head : pointer to pointer
 * Return: new nodes
*/
void free_listint(listint_t *head)
{

	while (head != NULL)
	{
	free(head->next);
	free(head);
	head = head->next;
	}
}
