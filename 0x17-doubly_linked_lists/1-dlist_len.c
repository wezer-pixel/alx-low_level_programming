#include "list.h"

/**
 * dlistint_len - count number of nodes in a dll
 * @h: ptr to head node
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++)
		h = h->next;
	return (count);
}
