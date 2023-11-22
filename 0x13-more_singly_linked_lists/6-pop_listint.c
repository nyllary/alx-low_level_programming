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

	if (head == NULL || *head == NULL)
		return (0);

	temp = (*head)->next;
	data_n = (*head)->n;
	*head = temp;
	gree(temp);

	return (data_n);
}
