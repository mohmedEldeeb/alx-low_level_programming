#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_strlen - returns length string.
 * @s : char
 * Return: number
 */

int get_strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * add_node - add new node at beginning of list.
 *
 * @head: head list.
 * @str: value to insert
 *
 * Return: count of nodes
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *add;

	add = malloc(sizeof(list_t));

	if (add == NULL)
		return (NULL);

	add->str = strdup(str);

	add->len = get_strlen(str);
	add->next = *head;
	*head = add;

	return (add);
}
