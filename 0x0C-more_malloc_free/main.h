#ifndef MAIN_H
#define MAIN_H
void *malloc_checked(unsigned int b);
char *string_concat(char *s1, char *s2);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
#endif
