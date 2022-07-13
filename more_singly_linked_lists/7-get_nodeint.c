#include "lists.h"

/**
 * get_nodeint_at_index - singly linked list
 * @head: pointer of listint_t
 * @index: index of the node
 * Return: look the code
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	int i = 0;

	tmp = head;

	if (tmp == NULL)
	{
		return (NULL);
	}

	while (tmp && i < 10)
	{
		tmp = tmp->next;
		i++;
	}
	return (tmp);
}
