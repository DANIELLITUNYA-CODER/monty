#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>

typedef struct stack_s
{
    int n;
    struct stack_s *prev;
    struct stack_s *next;
} stack_t;

typedef struct bus_s
{
    FILE *file;
    char *content;
    stack_t *stack;
    unsigned int line_number;
    size_t size;
} bus_t;

void addnode(stack_t **head, int n);
void addqueue(stack_t **head, int n);

/* New declarations */
int getline(char **lineptr, size_t *n, FILE *stream);
void execute(bus_t *bus);
void free_stack(stack_t *stack);

#endif /* MONTY_H */
