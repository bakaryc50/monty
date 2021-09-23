#include "monty.h"

/**
 * op_pstr - print the string starting from the top of the stack
 * @stack: stack pointer
 * @line_number: line number
 */
void op_pstr(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	stack_t *p = NULL;

	if (*stack)
	{
		(*stack)->next->prev = NULL;

		for (p = *stack; p && p->n > 0 && p->n < 128; p = p->prev)
			putchar(p->n);

		(*stack)->next->prev = *stack;
	}

	putchar('\n');
}
