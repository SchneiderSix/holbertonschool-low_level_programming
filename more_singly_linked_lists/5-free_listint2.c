#include "lists.h"

/**
 * free_listint2 - singly linked list
 * @head: pointer of listint_t
 * Return: count of nodes
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	*head = NULL;
}
