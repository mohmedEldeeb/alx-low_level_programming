#include "lists.h"

/**
 * pop_listint - deletes frist element in node
 *
 * @head: head
 *
 * Return: linked list
 */

int pop_listint(listint_t **head)
{
	int del;
	listint_t *h;
	listint_t *elem;

	if (*head == NULL)
		return (0);

	elem = *head;

	del = elem->n;

	h = elem->next;

	free(elem);

	*head = h;

	return (del);
}
