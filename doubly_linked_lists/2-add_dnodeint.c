#include "lists.h"
#include <stdlib.h> /* For malloc */

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: A pointer to a pointer to the head of the dlistint_t list.
 * @n: The integer data for the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL); /* Return NULL if malloc fails */
	}

	new_node->n = n;
	new_node->prev = NULL; /* New node will be the head, so its prev is NULL */
	new_node->next = *head; /* Link new node to the current head */

	if (*head != NULL)
	{
		(*head)->prev = new_node; /* Update current head's prev to new node */
	}

	*head = new_node; /* Update head to point to the new node */

	return (new_node);
}
