#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - check School students.
 * @h: name list
 *
 * Return: number nodes for list
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
