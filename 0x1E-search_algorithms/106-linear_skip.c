#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list of integers
 * @list: Pointer to the head of the skip list to search in
 * @value: Value to search for
 *
 * Return: Pointer to the first node where value is located, or NULL if not found
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *express;

	if (list == NULL)
		return (NULL);

	express = list->express;

	printf("Value checked at index [%lu] = [%d]\n", express->index, express->n);

	while (express && express->n < value)
	{
		list = express;
		express = express->express;
		if (express != NULL)
			printf("Value checked at index [%lu] = [%d]\n", express->index, express->n);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", list->index, express->index);

	return (linear_search(list, express, value));
}

/**
 * linear_search - Searches for a value in a linear range of the skip list
 * @list: Pointer to the head of the skip list range to search in
 * @express: Pointer to the last node of the skip list range
 * @value: Value to search for
 *
 * Return: Pointer to the node where value is located, or NULL if not found
 */
skiplist_t *linear_search(skiplist_t *list, skiplist_t *express, int value)
{
	while (list && list->n <= value)
	{
		printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}

	return (NULL);
}
