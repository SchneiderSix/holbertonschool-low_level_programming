#include "lists.h"

/**
 * sum_listint - singly linked list
 * @head: double pointer of listint_t
 * @idx: index of the node
 * @n: int var
 * Return: checkout the code
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nn, *tmp = *head;

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
	else
	{
		while (--idx)
		{
			tmp = tmp->next;
		}
		nn->next = tmp->next;
		tmp->next = nn;
		return (nn);
	}
	return (NULL);

}
