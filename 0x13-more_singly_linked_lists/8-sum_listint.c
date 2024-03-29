#include "lists.h"

/**
 * sum_listint - sum of all n in the list
 * @head: pointer to the head node
 *
 * Return: sum all n
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
