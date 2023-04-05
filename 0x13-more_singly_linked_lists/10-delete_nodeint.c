#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node
 *
 * @head: head
 *
 * @index: index of list to delete
 *
 * Return: 1 or 0 or -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *old;
	listint_t *next;

	old = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && old != NULL; i++)
		{
			old = old->next;
		}
	}

	if (old == NULL || (old->next == NULL && index != 0))
	{
		return (-1);
	}

	next = old->next;

	if (index != 0)
	{
		old->next = next->next;
		free(next);
	}
	else
	{
		free(old);
		*head = next;
	}

	return (1);
}
