#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - singly linked list
 * @h: pointer to listint_t
 * Return: count of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nu = 0;

	while (h)
	{
		h = h->next;
		nu++;
	}
	return (nu);
}


