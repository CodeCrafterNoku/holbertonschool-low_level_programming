#include "lists.h"
#include <stdlib.h> /* For free */

/**
 * delete_head_node - Helper function to delete the head node.
 * @head: A pointer to a pointer to the head of the dlistint_t list.
 *
 * Return: 1 on success, -1 on failure.
 */
static int delete_head_node(dlistint_t **head)
{
	dlistint_t *temp;

	if (*head == NULL) /* List is empty */
		return (-1);

	temp = *head;
	*head = temp->next; /* Move head to the next node */

	if (*head != NULL)
	{
		(*head)->prev = NULL; /* New head's prev should be NULL */
	}
	free(temp); /* Free the old head */

	return (1);
}

/**
 * delete_middle_or_end_node - Helper function to delete a node in middle/end.
 * @node_to_delete: A pointer to the node to be deleted.
 *
 * Return: 1 on success.
 */
static int delete_middle_or_end_node(dlistint_t *node_to_delete)
{
	/* Adjust the next node's previous pointer */
	if (node_to_delete->next != NULL)
	{
		node_to_delete->next->prev = node_to_delete->prev;
	}
	/* Adjust the previous node's next pointer */
	if (node_to_delete->prev != NULL)
	{
		node_to_delete->prev->next = node_to_delete->next;
	}
	free(node_to_delete); /* Free the node */

	return (1);
}

/**
 * delete_dnodeint_at_index - Deletes the node at a given index.
 * @head: A pointer to a pointer to the head of the dlistint_t list.
 * @index: The index of the node that should be deleted (starts at 0).
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i = 0;

	if (*head == NULL) /* List is empty */
		return (-1);

	if (index == 0) /* Handle deletion of the head node */
		return (delete_head_node(head));

	/* Traverse to the node at the specified index */
	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}

	/* If current is NULL, index is out of bounds */
	if (current == NULL)
		return (-1);

	/* Handle deletion of a middle or end node */
	return (delete_middle_or_end_node(current));
}
