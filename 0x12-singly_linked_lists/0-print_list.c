#include "lists.h"

/**
 * print_list - prints elements of list_t list.
 * @h: singly linked list
 *
 * Return: number
 */

size_t print_list(const list_t *h)
{
	int count;

	count = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
