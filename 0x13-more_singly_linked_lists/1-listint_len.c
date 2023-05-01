#include "lists.h"
/**
 * listint_len - return no of element in a linked listint_t list
 * @head: head pointer
 * Return: no of elements in the list
 */
size_t listint_len(const linstint_t *h)
{
	size_t count = 0;

	while (head)
	{
		head = head->next;
		count++;
	}
	return (count);
}
