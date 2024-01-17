#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>

/* Structs */
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

typedef struct instruction_s
{
	char *opcode;
	void (*f)(bus_t *bus);
} instruction_t;

/* Function Prototypes */
void execute(bus_t *bus);
void free_stack(stack_t *stack);

#endif /* MONTY_H */
