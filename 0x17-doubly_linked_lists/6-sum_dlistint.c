#include "list.h"

/**
 * sum_dlistint - sum data of a dll
 * @head: ptr to begin of list
 *
 * Return: sum data, or 0 if list empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
