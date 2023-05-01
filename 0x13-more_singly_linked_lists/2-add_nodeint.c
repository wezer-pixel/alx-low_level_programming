#include "lists.h"
/**
 * add_nodeint - add node at beginning of listint_t lst
 * @head: head node
 * @n: integer value to be stored in new code
 * Return: NULL if fail
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	if (head == NULL)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
