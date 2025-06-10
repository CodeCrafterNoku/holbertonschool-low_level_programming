#include "lists.h"
#include <stdlib.h> /* For malloc */

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: A pointer to a pointer to the head of the dlistint_t list.
 * @idx: The index where the new node should be added (starts at 0).
 * @n: The integer data for the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *current = *h;
	unsigned int i = 0;

	if (h == NULL) /* Invalid head pointer */
		return (NULL);

	if (idx == 0) /* Insert at the beginning */
		return (add_dnodeint(h, n));

	/* Traverse to the node BEFORE the insertion point */
	while (current != NULL && i < idx - 1)
	{
		current = current->next;
		i++;
	}

	/* If current is NULL, idx is out of bounds (too large) */
	if (current == NULL)
		return (NULL);

	/* If inserting at the end of the list */
	if (current->next == NULL)
		return (add_dnodeint_end(h, n));

	/* Insert in the middle */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = current->next;
	new_node->prev = current;
	current->next->prev = new_node;
	current->next = new_node;

	return (new_node);
}
