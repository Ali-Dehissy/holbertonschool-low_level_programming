#include "lists.h"
/**
 * print_listint - returns number of elements
 * @h : pointer
 * Return: nodes
*/
size_t print_listint(const listint_t *h)
{
	unsigned int node = 0;

	while (h != NULL)
	{
	h = h->next;
	node++;
	}
	return (node);
}
