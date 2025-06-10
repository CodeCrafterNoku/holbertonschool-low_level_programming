#include "lists.h"
#include <stdlib.h> /* For free */

/**
 * free_list - Frees a list_t list.
 * @head: A pointer to the head of the list_t list.
 *
 * Return: void.
 */
void free_list(list_t *head)
{
	list_t *current; /* Pointer to traverse the list */
	list_t *next_node; /* Pointer to store the next node before freeing */

	current = head;
	while (current != NULL)
	{
		next_node = current->next; /* Store next node's address */
		if (current->str != NULL)
		{
			free(current->str); /* Free the duplicated string */
		}
		free(current); /* Free the current node */
		current = next_node; /* Move to the next node */
	}
}
