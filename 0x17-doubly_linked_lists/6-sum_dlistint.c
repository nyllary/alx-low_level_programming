#include "lists.h"

/**
 * sum_dlistint - sums all the values in a list
 * @head: a pointer to the initial node
 * Return: The total sum of all the values
 */
int sum_dlistint(dlistint_t *head)
{
	int add = 0;

	while (head != NULL)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
