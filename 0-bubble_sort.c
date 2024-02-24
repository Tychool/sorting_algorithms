#include "sort.h"

/**
 * bubble_sort - Sort a given array of int in ascending order using Bubble Sort
 * @array: array
 * @size: array size
 *
 * Description: This function sorts the array using the Bubble Sort algorithm
 * and prints the array after each swap operation.
 */
void bubble_sort(int *array, size_t size)
{
    size_t i, blen = size;
    boolean bub = false;

    /* Check if the array is NULL or has fewer than 2 elements */
    if (array == NULL || size < 2)
        return;

    /* Continue sorting until no swaps are made in a pass */
    while (bub == false)
    {
        bub = true; /* Assume the array is sorted */
        for (i = 0; i < blen - 1; i++)
        {
            /* If two adjacent elements are out of order, swap them */
            if (array[i] > array[i + 1])
            {
                int_swap(array + i, array + i + 1);
                print_array(array, size); /* Print the array after each swap */
                bub = false; /* Set bub to false to continue sorting */
            }
        }
        blen--; /* Decrease the length of the array */
    }
}

