#include "lists.h"
/**
 * get_nodeint_at_index - return the nth node of a list
 * @head: pointer to head of the list
 * @index: index of the node to return
 * Return: pointer to the nth node or NULL if not found
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		if (count == index)
			return (current);
		count++;
		current = current->next;
	}
	return (NULL);
}
