#include "lists.h"
#include <stdlib.h> /* For malloc, free */
#include <string.h> /* For strdup */

/**
 * create_new_node - Helper to create and initialize a new list_t node.
 * @str: The string for the new node.
 *
 * Return: Pointer to the new node, or NULL on failure.
 */
static list_t *create_new_node(const char *str)
{
	list_t *new_node;
	unsigned int len = 0;
	const char *temp_str;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	if (str)
	{
		new_node->str = strdup(str);
		if (new_node->str == NULL)
		{
			free(new_node);
			return (NULL);
		}
		temp_str = str; /* Use temp_str to calculate length without modifying str */
		while (temp_str[len]) /* Manually calculate length, no strlen */
		{
			len++;
		}
	}
	else
	{
		new_node->str = NULL;
		len = 0;
	}
	new_node->len = len;
	new_node->next = NULL;

	return (new_node);
}

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: A pointer to a pointer to the head of the list_t list.
 * @str: The string to be duplicated and stored in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *current_node;

	new_node = create_new_node(str);
	if (new_node == NULL)
	{
		return (NULL);
	}

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		current_node = *head;
		while (current_node->next != NULL)
		{
			current_node = current_node->next;
		}
		current_node->next = new_node;
	}

	return (new_node);
}
