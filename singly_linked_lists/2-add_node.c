#include "lists.h"
#include <stdlib.h> /* For malloc, free */
#include <string.h> /* For strdup, strlen */

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: A pointer to a pointer to the head of the list_t list.
 * @str: The string to be duplicated and stored in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL); /* Return NULL if malloc fails */
	}

	if (str)
	{
		new_node->str = strdup(str);
		if (new_node->str == NULL)
		{
			free(new_node); /* Clean up if strdup fails */
			return (NULL);
		}
		while (str[len])
		{
			len++;
		}
		new_node->len = len;
	}
	else
	{
		new_node->str = NULL;
		new_node->len = 0;
	}

	new_node->next = *head; /* Link the new node to the current head */
	*head = new_node;      /* Update the head to point to the new node */

	return (new_node);
}
