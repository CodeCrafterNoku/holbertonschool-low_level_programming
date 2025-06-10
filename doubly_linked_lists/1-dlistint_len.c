#include "lists.h" /* For dlistint_t definition */

/**
 * dlistint_len - Returns the number of elements in a linked dlistint_t list.
 * @h: A pointer to the head of the dlistint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0; /* Initialize node counter */

	while (h != NULL)
	{
		count++; /* Increment count for the current node */
		h = h->next; /* Move to the next node */
	}

	return (count);
}
