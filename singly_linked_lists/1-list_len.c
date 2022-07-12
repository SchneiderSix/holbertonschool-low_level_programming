#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * list_len - singly linked list
 * @h: pointer to list_t
 * Return: count of nodes
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}
