#include "lists.h"

/**
 * delete_dnodeint_at_index - explicit name
 * @head: double pointer of dlistint_t
 * @index: index
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head, *dn;
	unsigned int i = 0;

	if (!*head || head)
	{
		return (-1);
	}
	if (index == 0 && tmp->next != NULL)
	{
		dn = tmp;
		tmp->next->prev = NULL;
		tmp->next = *head;
		free(dn);
		return (1);
	}
	else if (index == 0 && tmp->next == NULL)
	{
		free(*head);
		return (1);
	}
	while (tmp->next != NULL)
	{
		if (i == index)
		{
			dn = tmp;
			tmp->next->prev = tmp->prev;
			tmp->prev->next = tmp->next;
		}
		tmp = tmp->next;
		i += + 1;
	}
	if (index == i)
	{
		tmp->prev->next = NULL;
		dn = tmp;
	}
	if (index > i)
	{
		return (-1);
	}
	free(dn);
	return (1);
}
