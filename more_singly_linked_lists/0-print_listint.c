#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - singly linked list
 * @h: pointer to listint_t
 * Return: count of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nu = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nu++;
		h = h->next;
	}
	return (nu);
}


