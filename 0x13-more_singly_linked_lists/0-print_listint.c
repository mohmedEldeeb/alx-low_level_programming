#include "lists.h"

/**
 * print_listint - prints all list
 *
 * @h: head
 *
 * Return: numbers
 */

size_t print_listint(const listint_t *h)
{
	size_t nlist = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nlist++;
	}
	return (nlist);
}
