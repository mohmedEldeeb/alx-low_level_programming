#include "lists.h"

/**
 * reverse_listint - Reverses list
 *
 * @head: pointer to address
 *
 * Return: pointer to node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *old, *new;

	if (head == NULL || *head == NULL)
		return (NULL);

	new = NULL;

	while ((*head)->next != NULL)
	{
		old = (*head)->next;
		(*head)->next = new;
		new = *head;
		*head = old;
	}

	(*head)->next = new;

	return (*head);
}
