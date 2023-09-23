#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list
 *@head: pointer to the head of the list
 *@str: string to be added to the list
 *
 *Return: NULL in case of failure
 *or address or the element
*/

list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *New, *lent;

	New = malloc(sizeof(list_t));
	if (New == NULL)
		return (NULL);

	dup = strdup(str);
	if (str == NULL)
	{
		free(New);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	New->str = dup;
	New->len = len;
	New->next = NULL;

	if (*head == NULL)
		*head = New;
	else
	{
		lent = *head;
		while (lent->next != NULL)
			lent = lent->next;
		lent->next = New;
	}
	return (*head);
}
