#include "lists.h"
/**
 * add_nodeint_end -add new node at end of a listint_t list
 * @head: double pointer to head of the list
 * @n: int value to store in the new node
 *
 * Return: Address of the new wlwmwnt , NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *current;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	current = *head;
	while (current->next != NULL)
		current = current->next;

	current->next = new_node;
	return (new_node);
}
