#include "lists.h"

/**
 * add_dnodeint_end - adds node at the end
 * @head: double pointer of dlistint_t
 * @n: int
 * Return: address of node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nn, *last = *head;

	nn = malloc(sizeof(dlistint_t));

	if (!nn)
	{
		return (NULL);
	}
	nn->n = n;
	nn->next = NULL;
	if (*head == NULL)
	{
		nn->prev = NULL
		*head = nn;
	}
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = nn;
	nn->prev = last;

	return (nn);
}
