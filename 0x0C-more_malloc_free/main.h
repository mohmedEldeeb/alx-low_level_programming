#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

void _print(char *str, int l);

char *mul(char n, char *num, int num_index, char *dest, int dest_index);

int check_for_digits(char **av);

void init(char *str, int l);

void *malloc_checked(unsigned int b);

void *_calloc(unsigned int nmemb, unsigned int size);

int *array_range(int min, int max);

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#include <stdio.h>

#endif/*MAIN_H*/

