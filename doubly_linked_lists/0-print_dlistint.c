#include <stdio.h> /* For printf */
#include "lists.h" /* For dlistint_t definition */

/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: A pointer to the head of the dlistint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t node_count = 0; /* Initialize node counter */

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next; /* Move to the next node */
		node_count++; /* Increment node count */
	}

	return (node_count);
}
