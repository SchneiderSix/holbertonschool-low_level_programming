#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - singly linked list
 * @head: pointer of pointer of list_t
 * @str: string
 * Return: new address of element or null
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *lastnode = *head;
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
	newnode->str = strdup(str);
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	while (lastnode->next != NULL)
	{
		lastnode = lastnode->next;
	}
	lastnode->next = newnode;

	return (newnode);
}
