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

	if (!*head || head)
	{
		return (-1);
	}
	if (index == 0 && tmp->next != NULL)
	{
		dn = tmp;
		tmp->next>prev = NULL;
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
		if (dlistint_len(tmp) == index)
		{
			dn = tmp;
			tmp->next->prev = tmp->prev;
			tmp->prev->next = tmp->next;
		}	
	}
	if (index > dlistint_len(tmp))
	{
		return (-1);
	}
	free(dn);
	return (1);
}
