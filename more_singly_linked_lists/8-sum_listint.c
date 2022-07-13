#include "lists.h"

/**
 * sum_listint - singly linked list
 * @head: pointer of listint_t
 * Return: checkout the code
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
