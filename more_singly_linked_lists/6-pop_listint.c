#include "lists.h"

/**
 * pop_listint - singly linked list
 * @head: pointer of listint_t
 * Return: count of nodes
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (!head || !*head)
	{
		return (0);
	}

	while (*head)
	{
		n = (*head)->n;
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	return (n);
}
