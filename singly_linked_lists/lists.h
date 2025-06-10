#ifndef LISTS_H
#define LISTS_H

#include <stddef.h> /* For size_t */
#include <stdio.h> /* For dprintf, printf (used in main for context) */
#include <stdlib.h> /* For EXIT_SUCCESS, EXIT_FAILURE, malloc, free */

/**
 * struct dlistint_s - doubly linked list
 * @n: integer data
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * for Holberton project
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);

#endif /* LISTS_H */
