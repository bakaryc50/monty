#include "monty.h"

/**
 * op_pall - print each element on the stack
 * @stack: stack pointer
 */
void op_pall(stack_t **stack)
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
