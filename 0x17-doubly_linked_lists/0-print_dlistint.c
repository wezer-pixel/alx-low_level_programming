#include "list.h"

/**
 * print d_listint - print elements of a dll
 * @h: ptr to the start of the list
 * Return: Number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count;

	for (count = 0; h != NULL; h->n);
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
