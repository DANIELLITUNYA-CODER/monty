#include "monty.h"

/**
 * f_push - pushes an element to the stack
 * @stack: pointer to the head of the stack
 * @line_number: line number
 * @arg: argument to push
 * Return: void
 */
void f_push(stack_t **stack, unsigned int line_number, char *arg)
{
    (void)arg; /* unused parameter */

    if (!stack)
    {
        fprintf(stderr, "L%d: invalid stack\n", line_number);
        exit(EXIT_FAILURE);
    }

    /* Your push logic here */
}
