#include "lists.h"

/**
 * insert_dnodeint_at_index - explicit name
 * @h: double pointer of dlistint_t
 * @idx: index
 * @n: data
 * Return: nn
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nn, *tmp = *h;
	unsigned int i;

	nn = malloc(sizeof(dlistint_t));

	if (!nn || !h)
	{
		return (NULL);
	}
	nn->n = n;
	nn->next = NULL;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	for (i = 0; tmp != NULL && i <= idx; i++)
	{
		if (i == idx - 1)
		{
			if (tmp->next == NULL)
			{
				return (add_dnodeint_end(h, n));
			}
			nn->next = tmp->next;
			nn->prev = tmp;
			tmp->next->prev = nn;
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
