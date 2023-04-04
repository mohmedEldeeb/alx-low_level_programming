#include "lists.h"

/**
 * add_nodeint_end - add new node at end list
 * @head: head
 * @n: integer
 *
 * Return: address
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *old;


	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	old = *head;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (old->next != NULL)
		{
			old = old->next;
		}
		old->next = new;
	}

	return (new);
}
