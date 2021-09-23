#include "monty.h"

/**
 * op_pop - remove the element at the top of the stack
 * @stack: stack pointer
 * @line_number: line number
 */
void op_pop(stack_t **stack, unsigned int line_number)
{
	stack_t *top = NULL;

	if (!*stack)
		pfailure("L%u: can't pop an empty stack\n", line_number);

	if (*stack != (*stack)->prev)
	{
		top = (*stack)->prev;
		(*stack)->next->prev = top;
		top->next = (*stack)->next;
	}
	free(*stack);
	*stack = top;
}
