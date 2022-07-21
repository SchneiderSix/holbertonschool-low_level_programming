#include "lists.h"

/**
 * add_dnodeint - adds node at the beginning
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
	if ((*head) != NULL)
	{
		(*head)->prev = nn;
	}
	(*head) = nn;

	return (nn);
}
