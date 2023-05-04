#include "lists.h"
/**
 * find_listint_loop - finds the loop in a linked list
 * @head: Pointer to head of the list
 * Return: Address of the node where the loop startd, or
 * NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	slow = fast = head;

	if (head == NULL)
		return (NULL);

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			slow = head;
			break;
		}
	}
	while (slow != fast)
	{
		slow = slow->next;
		fast = fast->next;
	}
	return (fast);
}
