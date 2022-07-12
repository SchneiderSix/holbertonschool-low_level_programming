#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - singly linked list
 * @h: pointer to list_t
 * Return: count of nodes
 */

size_t print_list(const list_t *h)
{
	size_t n;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%lu] %s\n", h->len, h->str);
		}
		h = h->next;
		n++;
	}
	return (n);
}
