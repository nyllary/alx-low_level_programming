#include "list.h"

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
		printf("[%u] %s\n",h->len, h->str);
		count++;
		h = h->next;
	}
	return (count);
}

int main(void)
{
    list_t *head;
    list_t *new;
    list_t hello = {"World", 5, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(list_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->str = strdup("Hello");
    new->len = 5;
    new->next = head;
    head = new;
    n = print_list(head);
    printf("-> %lu elements\n", n);

    printf("\n");
    free(new->str);
    new->str = NULL;
    n = print_list(head);
    printf("-> %lu elements\n", n);

    free(new);
    return (0);
}
