#include "lists.h" /* For list_t definition and function prototype */
#include <stddef.h> /* For size_t */

/**
 * list_len - Returns the number of elements in a linked list_t list.
 * @h: A pointer to the head of the list_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0; /* Initialize node counter */

	while (h != NULL)
	{
		count++; /* Increment count for the current node */
		h = h->next; /* Move to the next node */
	}

	return (count);
}
