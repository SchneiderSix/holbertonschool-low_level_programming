#include "lists.h"

/**
 *insert_nodeint_at_index - singly linked list
 * @head: double pointer of listint_t
 * @idx: index of the node
 * @n: int var
 * Return: checkout the code
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nn, *tmp = *head;
	unsigned int i;

	nn = malloc(sizeof(listint_t));

	if (!nn || !head)
	{
		return (NULL);
	}
	nn->n = n;
	nn->next = NULL;

	if (idx == 0)
	{
		nn->next = *head;
		*head = nn;
		return (nn);
	}
	for (i = 0; tmp != NULL && i <= idx; i++)
	{
		if (i == idx - 1)
		{
			nn->next = tmp->next;
			tmp->next = nn;
			return (nn);
		}
		else
		{
			tmp = tmp->next;
		}
	}
	return (NULL);
}
