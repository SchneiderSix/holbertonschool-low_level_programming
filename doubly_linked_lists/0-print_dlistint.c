#include "lists.h"

/**
 * size_t print_dlistint - prints all elements of list
 * @h: pointer to dlistint_t
 * Return: n of nodes
 */
size_t print_dlistint(const dlistint_t *h)
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
