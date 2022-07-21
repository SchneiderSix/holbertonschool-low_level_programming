#include "lists.h"

/**
 * dlistint_len - prints all elements of list
 * @h: pointer to dlistint_t
 * Return: n of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nu = 0;

	while (h)
	{
		h = h->next;
		nu++;
	}
	return (nu);
}
