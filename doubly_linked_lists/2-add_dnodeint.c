#include "lists.h"

/**
 * add_dlistint - adds node at the beginning
 * @head: double pointer of dlistint_t
 * @n: int
 * Return: address of node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nn;

	nn = malloc(sizeof(dlistint_t));

	if (!nn)
	{
		return (NULL);
	}
	nn->n = n;
	nn->next = *head;
	nn->prev = NULL;

	return (nn);
}
