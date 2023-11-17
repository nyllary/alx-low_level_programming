#include "list.h"

/**
 * list_len - prints the number of nodes
 *
 * @h: pointer to the first node
 *
 * Return: the number of total node
 */
size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
