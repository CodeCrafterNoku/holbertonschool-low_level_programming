#include <stdio.h> /* For printf */
#include "lists.h" /* For list_t definition and function prototype */

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: A pointer to the head of the list_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 0; /* Initialize count of nodes */

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next; /* Move to the next node */
		node_count++; /* Increment node count */
	}

	return (node_count);
}
