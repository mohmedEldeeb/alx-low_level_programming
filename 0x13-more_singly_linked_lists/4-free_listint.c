#include "lists.h"

/**
 * free_listint - frees list
 *
 * @head: head
 *
 * Return: NULL if error
 */

void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
