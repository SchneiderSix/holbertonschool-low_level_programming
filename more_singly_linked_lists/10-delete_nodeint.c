#include "lists.h"

/**
 * delete_nodeint_at_index - singly linked list
 * @head: double pointer of listint_t
 * @idx: index of the node
 * @n: int var
 * Return: checkout the code
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *dn, *tmp = *head;
	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		tmp->next = NULL;
		free(tmp);
		return (1);
	}
	else
	{
		for (i = 0; i < index - 1; i++)
		{
			tmp = tmp->next;
			if (!tmp || !(tmp->next))
			{
				return (-1);
			}
		}
		dn = tmp->next;
		tmp->next = tmp->next->next;
		dn->next = NULL;
		free(dn);
		return (1);
	}
}
