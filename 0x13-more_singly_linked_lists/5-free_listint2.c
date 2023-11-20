#include "lists.h"

/**
 * free_listint2 - frees a node
 *
 * @head: a pointer to a pointer to a node
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *next;

	if (head == NULL || *head == NULL)
		return;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}
