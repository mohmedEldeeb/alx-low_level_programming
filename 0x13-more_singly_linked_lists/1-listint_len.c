#include "lists.h"

/**
 * listint_len - returns number elements
 *
 * @h: head
 *
 * Return: numbers
 */

size_t listint_len(const listint_t *h)
{
	size_t nlist = 0;

	while (h != NULL)
	{
		h = h->next;
		nlist++;
	}
	return (nlist);
}
