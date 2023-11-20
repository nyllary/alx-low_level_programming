#include "lists.h"

/**
 * print_listint - prints the elements of a struct
 *
 * @h: the node
 *
 * Return: the number of elements on success
 */
size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
