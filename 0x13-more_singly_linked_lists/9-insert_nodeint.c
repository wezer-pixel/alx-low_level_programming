#include "lists.h"
/**
 * insert_nodeint_at_index - insert a new node at given position
 * @head: pointer tohead of the list
 * @idx: the index of the list wher the new node should be added
 * @n: thr int value to be added to the new node
 *
 * Return: Address of the new node, or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current_node;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (head == NULL || idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	current_node = *head;
	while (current_node != NULL)
	{
		for (i = 0; i < idx - 1; i++)
		{
			current_node = current_node->next;
		}
	}
	if (current_node == NULL)
		return (NULL);

	new_node->next = current_node->next;
	current_node->next = new_node;

	return (new_node);
}
