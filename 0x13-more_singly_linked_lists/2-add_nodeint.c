#include "lists.h"

/**
 * add_nodeint - adds a new node at the start
 *
 * @head: pointer to the allocated memory
 * @n: integer value to be stored the node
 *
 * Return: a pointer to the new node(success)
 *	NULL when it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
