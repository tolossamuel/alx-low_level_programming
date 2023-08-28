#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * struct list_s - linked list
 * @n: value of int
 * @next: pointer for next node
 * single linked list
 */
typedef struct list_s
{
int n;
struct listint_s *next;
} list_t;

size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
int _putchar(char c);

#endif
