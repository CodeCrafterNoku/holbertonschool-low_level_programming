#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n) of a dlistint_t list.
 * @head: A pointer to the head of the dlistint_t list.
 *
 * Return: The sum of all n, or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0; /* Initialize sum */

	while (head != NULL)
	{
		sum += head->n; /* Add current node's data to sum */
		head = head->next; /* Move to the next node */
	}

	return (sum);
}
