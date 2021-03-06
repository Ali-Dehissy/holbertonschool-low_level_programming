#include "lists.h"
/**
 * print_list - prints all elements
 * @h : pointer
 * Return: nodes
*/
size_t print_list(const list_t *h)
{
	unsigned int node = 0;

	while (h != NULL)
	{
	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%d] %s\n", h->len, h->str);
	h = h->next;
	node++;
	}
	return (node);
}
