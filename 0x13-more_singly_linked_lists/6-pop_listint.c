#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t list
 * @head: doub pointer to the head of the list
 * and returns the head node's data (n)
 *
 * Return: the data of the deleted node or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	data = temp->n;

	*head = (*head)->next;
	free(temp);

	return (data);
}
