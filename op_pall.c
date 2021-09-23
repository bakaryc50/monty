#include "monty.h"

/**
 * op_pall - print each element on the stack
 * @stack: stack pointer
 * @line_number: line number
 */
void op_pall(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	stack_t *p = NULL;

	if (*stack)
	{
		(*stack)->next->prev = NULL;

		for (p = *stack; p; p = p->prev)
			printf("%d\n", p->n);

		(*stack)->next->prev = *stack;
	}
}
