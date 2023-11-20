#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t
 *
 * @head:a pointer to the head node
 *
 * Return: the data of the head node's data
 */
int pop_listint(listint_t **head)
{
	int data_n;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	data_n = temp->n;
	*head = (*head)->next;

	free(temp);

	return (data_n);
}

int main(void)
{
    listint_t *head;
    int n;

    head = NULL;
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);
    print_listint(head);
    n = pop_listint(&head);
    printf("- %d\n", n);
    print_listint(head);
    n = pop_listint(&head);
    printf("- %d\n", n);
    print_listint(head);
    free_listint2(&head);
    printf("%p\n", (void *)head);
    return (0);
}
