#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end
 *
 * @head: a pointer to a pointer to a heap memory
 * @n: the integer value to be stored in the new node
 *
 * Return: A pointer to a new node on success
 *	NULL on fail
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_end = malloc(sizeof(listint_t));
	listint_t *current;

	if (new_end == NULL)
		return (NULL);

	new_end->n = n;
	new_end->next = NULL;

	if (*head == NULL)
		*head = new_end;
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = new_end;
	}
	return (new_end);
}
