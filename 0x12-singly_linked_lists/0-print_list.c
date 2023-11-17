#include "lists.h"

/**
 * print_list - prints the elements of a linked list
 *
 * @h: pointer to the first node
 *
 * Return: NULL if str is empty
 *	Elements of the node
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (h->str == NULL)
		printf("[0] (nil)\n");

	while (h != NULL)
	{
		printf("[%u] %s\n", h->len, h->str);
		count++;
		h = h->next;
	}
	return (count);
}
