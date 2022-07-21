#include "lists.h"

/**
 * sum_dlistint - sum all data
 * @head: pointer of dlistint_t
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
