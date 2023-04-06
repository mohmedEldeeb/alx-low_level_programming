#include "lists.h"

/**
 * print_listint_safe - prints a linked list
 *
 * @head: hade list
 *
 * Return: number
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	long int x;

	while (head)
	{
		x = head - head->next;
		num++;
		printf("[%p] %d\n", (void *)head, head->n);

		if (x > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (num);
}
