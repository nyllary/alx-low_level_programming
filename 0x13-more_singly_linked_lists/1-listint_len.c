#include "lists.h"

/**
 * listint_len - prints out the number of elements
 *
 * @h: node
 *
 * Return: the number of elements on success
 */
size_t listint_len(const listint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
