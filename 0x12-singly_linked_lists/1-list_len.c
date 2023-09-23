#include "lists.h"
#include <stdio.h>

/**
 * list_len - Return number of elements
 * @h: Points to struct
 * Return: Num of elements
 */
size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
