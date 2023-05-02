#include "lists.h"
/**
 * reverse_listint - reverse a liat
 * @head: pointer
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;

	if (head == NULL || *head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);

	while (current != NULL)
	{
		listint_t *next = current->next;

		current->next = prev;
		prev = current;
		current = next;
	}

	*head = prev;
	return (prev);
}
