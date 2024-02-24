#include <stdlib.h>
#include <stdio.h>
#include "sort.h"
/**
 * print_list - print lits of int
 *
 * @list: list
 */
void print_list(const listint_t *list)
{
	int i;

	i = 0;
	while (list)
	{
		if (i > 0)
			printf(", ");
		printf("%d", list->n);
		++i;
		list = list->next;
	}
	printf("\n");
}

/**
 * display_array - display an array of integers
 *
 * @array: array
 * @size: array size
 */
void display_array(const int *array, size_t size)
{
    size_t i;

    i = 0;
    while (array && i < size)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
        ++i;
    }
    printf("\n");
}


