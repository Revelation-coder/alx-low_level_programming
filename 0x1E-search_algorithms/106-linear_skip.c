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
    skiplist_t *curr, *prev;

    if (list == NULL)
        return (NULL);

    curr = list;
    while (curr)
    {
        prev = curr;
        if (curr->express)
        {
            printf("Value checked at index [%lu] = [%d]\n", curr->express->index, curr->express->n);
            if (curr->express->n >= value)
            {
                printf("Value found between indexes [%lu] and [%lu]\n",
                       curr->index, curr->express->index);
                break;
            }
            curr = curr->express;
        }
        else
        {
            while (curr->next)
                curr = curr->next;
            printf("Value found between indexes [%lu] and [%lu]\n",
                   prev->index, curr->index);
            break;
        }
    }

    while (prev && prev->index <= curr->index)
    {
        printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
        if (prev->n == value)
            return (prev);
        prev = prev->next;
    }

    return (NULL);
}
