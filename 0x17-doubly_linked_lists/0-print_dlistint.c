#include "list.h"
/**
 * print_dlistint - print all elements of a dll
 * @h: pointer to start of list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count;

	for (count = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
