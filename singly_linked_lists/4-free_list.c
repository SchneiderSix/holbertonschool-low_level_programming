#include "lists.h"
#include <stdlib.h>

/**
 * free_list - singly linked list
 * @head: list_t to be free
 * Return: new address of element or null
 */

void free_list(list_t *head)
{
	__attribute__((unused)) list_t *tmpnode;

	while (head)
	{
		tmpnode = head->next;
		free(head->str);
		free(head);
	}
}
