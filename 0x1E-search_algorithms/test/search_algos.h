#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <math.h>

/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 */


int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);

int exponential_search(int *array, size_t size, int value);
int _binary_search(int *array, size_t left, size_t right, int value);

int advanced_binary(int *array, size_t size, int value);
int binary_search_ad(int *array, size_t l, size_t r, int value);


#endif /*SEARCH_ALGOS_H*/
