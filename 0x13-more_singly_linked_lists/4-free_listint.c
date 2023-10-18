#include "lists.h"
#include <stddef.h>

/**
 * free_listint - It frees a linked list
 * @head: A list head.
 *
 * Return: None
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}

	free(head);
}
