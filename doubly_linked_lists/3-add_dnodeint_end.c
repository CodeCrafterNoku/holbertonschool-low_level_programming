#include "lists.h"
#include <stdlib.h> /* For malloc */

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: A pointer to a pointer to the head of the dlistint_t list.
 * @n: The integer data for the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *current_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL); /* Return NULL if malloc fails */
	}

	new_node->n = n;
	new_node->next = NULL; /* New node will be the last, so its next is NULL */

	if (*head == NULL)
	{
		new_node->prev = NULL; /* If list is empty, new node has no previous */
		*head = new_node;      /* New node becomes the head */
	}
	else
	{
		current_node = *head;
		while (current_node->next != NULL)
		{
			current_node = current_node->next; /* Traverse to the last node */
		}
		current_node->next = new_node; /* Link last node's next to new node */
		new_node->prev = current_node; /* Link new node's prev to last node */
	}

	return (new_node);
}
