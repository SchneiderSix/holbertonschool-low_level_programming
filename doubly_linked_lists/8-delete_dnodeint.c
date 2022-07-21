#include "lists.h"

/**
 * delete_dnodeint_at_index - explicit name
 * @head: double pointer of dlistint_t
 * @index: index
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head, *dn = *head;
	unsigned int i = 0;
	unsigned int ix = index - 1;

	if (!*head)
		return (-1);
	if (index == 0)
	{
		*head = dn->next;
		free(dn);
		if (*head)
		{
			(*head)->prev = NULL;
		}
		return (1);
	}
	while (tmp && i != ix)
	{
		i++;
		tmp = tmp->next;
	}
	if (tmp && i == ix)
	{
		dn = tmp->next;
		if (dn->next)
		{
			dn->next->prev = tmp;
		}
			tmp->next = dn->next;
			free(dn);
		return (1);
	}

	return (-1);
}
