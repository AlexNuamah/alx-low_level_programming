#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - Searches for an integer in an array.
 *
 * @array: Pointer to an array of integers.
 * @size: Number of elements in the array.
 * @cmp: Pointer to the comparison function.
 *
 * Return: Index of the first element for which the
 * comparison function returns non-zero,
 *         or -1 if no such element is found or if array is NULL.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int j;

if (array == NULL || cmp == NULL)
return (-1);
for (j = 0; j < size; j++)
{
if (cmp(array[j]))
{
return (j);
}
}
return (-1);
}
