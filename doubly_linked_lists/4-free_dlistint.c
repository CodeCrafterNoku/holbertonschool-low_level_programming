#include "lists.h"
#include <stdlib.h> /* For free */

/**
 * free_dlistint - Frees a dlistint_t list.
 * @head: A pointer to the head of the dlistint_t list.
 *
 * Return: void.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	dlistint_t *next_node;

	current = head;
	while (current != NULL)
	{
		next_node = current->next; /* Store the next node's address */
		free(current);             /* Free the current node */
		current = next_node;       /* Move to the stored next node */
	}
}
