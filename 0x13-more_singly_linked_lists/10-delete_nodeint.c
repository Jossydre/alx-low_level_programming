#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes node at particular
 * listint_t list index.
 * @head: Points to address of listint_t list head.
 * @index: Index of the node to be deleted - indices start at 0.
 *
 * Return: Success 1, Esle failure -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *maks, *drey = *head;
	unsigned int n;

	if (drey == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(drey);
		return (1);
	}

	for (n = 0; n < (index - 1); n++)
	{
		if (drey->next == NULL)
			return (-1);

		drey = drey->next;
	}

	maks = drey->next;
	drey->next = maks->next;
	free(maks);
	return (1);
}
