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
		return (-1);
	if (index == 0)
	{
		dn = tmp;
		tmp = dn->next;
		if (tmp)
		{
			tmp->prev = NULL;
		}
		*head = tmp;
		free(dn);
		return (1);
	}
	while (tmp)
	{
		if (i == index)
		{
			if (tmp->next)
			{
				dn = tmp;
				tmp->next->prev = tmp->prev;
				tmp->prev->next = tmp->next;
			}
			if (!tmp->next)
			{
				dn = tmp;
				tmp->prev->next = NULL;
			}
			free(dn);
			return (1);
		}
		tmp = tmp->next;
		i++;
	}
	return (-1);
}
