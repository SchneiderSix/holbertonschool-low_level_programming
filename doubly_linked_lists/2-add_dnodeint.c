#include "lists.h"

/**
 * dlistint_len - prints all elements of list
 * @head: double pointer of dlistint_t
 * @n: int
 * Return: address of node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	listint_t *nn;

	nn = malloc(sizeof(listint_t));

	if (!nn)
	{
		return (NULL);
	}
	nn->n = n;
	nn->next = *head;
	*head = nn;

	return (nn);
}
