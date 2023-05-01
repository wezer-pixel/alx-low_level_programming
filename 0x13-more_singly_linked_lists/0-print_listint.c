#include <stdio.h>
#include "lists.h"
/**
 * print_listint - print all elements of listint_t list
 * @head: head node
 * Return: no of nodes
 */
size_t print_listint(const listint_t *head)
{
	size_t count = 0;

	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
		count++;
	}
	return (count);
}
