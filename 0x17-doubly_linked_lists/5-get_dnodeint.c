#include "lists.h"

/**
 * get_dnodeint_at_index - function name
 * @head: a pointer
 * @index: unsigned integer value
 * Return: the nth node of a linked list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);
		i++;
		head = head->next;
	}

	return (NULL);
}
