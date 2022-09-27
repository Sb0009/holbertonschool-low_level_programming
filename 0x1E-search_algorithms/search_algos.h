#ifndef SEARCH_ALGORITHM
#define SEARCH_ALGORITHM

#include <stdio.h>

/*Auxiliar Prototype*/
void print_array(int *array, int begin, int final);
int binary_searchEx(int *array, int start, int end, int objetive);

/*Prototypes*/
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);






#endif /*SEARCH_ALGORITHM*/