#include "lists.h"

/**
 * free_listint2 - frees linked list
 * @head: head
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *next;

	if (head != NULL)
	{
		next = *head;
		while ((temp = next) != NULL)
		{
			next = next->next;
			free(temp);
		}
		*head = NULL;
	}
}
