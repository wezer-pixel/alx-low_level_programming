#include "lists.h"
/**
 * free_listint_safe - frees a listint_t linked list.
 * @head: double pointer to the start of the list
 *
 * Return: the size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t **list = NULL;
	size_t size = 0;
	listint_t *current, *next;
	size_t i;

	if (head == NULL || *head == NULL)
		return (0);

	current = *head;
	while (current)
	{
		next = current->next;
		for (i = 0; i < size; i++)
		{
			if (current == list[i])
			{
				free(list);
				*head = NULL;
				return (size);
			}
		}
		list = _ra(list, size + 1, current);
		size++;
		free(current);
		current = next;
	}
	free(list);
	*head = NULL;
	return (size);
}

/**
 * _ra - reallocates memory for an array of pointers
 * to the nodes in a linked list
 * @list: the old list to append
 * @size: size of the new list (always one more than the old list)
 * @new: new node to add to the list
 *
 * Return: pointer to the new list
 */
listint_t **_ra(listint_t **list, size_t size, listint_t *new)
{
	listint_t **newlist;
	size_t i;

	newlist = malloc(size * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (i = 0; i < size - 1; i++)
		newlist[i] = list[i];
	newlist[i] = new;
	free(list);
	return (newlist);
}

