#include "lists.h"

/**
 * get_nodeint_at_index - returns node at an index
 *
 * @head: first node
 * @index: index of the node
 *
 * Return: a pointer to the node(Success)
 *	NULL on failure
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int num;

	while (current != NULL)
	{
		if (num == index)
			return (current);
		current = current->next;
		num++;
	}
	return (NULL);
}
