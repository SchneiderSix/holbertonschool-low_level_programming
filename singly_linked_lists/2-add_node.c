#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * add_node - singly linked list
 * @h: pointer to list_t
 * Return: count of nodes
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	int len = 0;

	newnode = malloc(sizeof(list_t));

	if (!newnode)
	{
		return (NULL);
	}

	while (str[len])
	{
		len++;
	}
	newnode->len = len;
	newnode->str = strup(str);
	newnode->next = (*head);
	(*head) = newnode;

	return (*head);
}
