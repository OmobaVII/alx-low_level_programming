#ifndef _MAIN_H_
#define _MAIN_H_

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char*s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_zie, unsigned int new_size);
int _putchar(char c);
void print_number(int n);
void _printerror(char *s1);

#endif
