#include "lists.h"

/**
 * add_nodeint_end - singly linked list
 * @head: double pointer of listint_t
 * @n: int var
 * Return: count of nodes
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nn, *ln = *head;

	nn = malloc(sizeof(listint_t));

	if (!nn)
	{
		return (NULL);
	}

	nn->n = n;
	nn->next = NULL;

	if (*head == NULL)
	{
		*head = nn;
		return (nn);
	}

	while (ln->next != NULL)
	{
		ln = ln->next;
	}

	ln->next = nn;

	return (nn);
}
