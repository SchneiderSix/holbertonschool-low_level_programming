#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * add_nodeint - singly linked list
 * @head: double pointer of listint_t
 * @n: int var
 * Return: count of nodes
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nn;

	nn = malloc(sizeof(listint_t));

	if (!nn)
	{
		return (NULL);
	}
	nn->n = n;
	nn->next = *head;

	return (head);
}
