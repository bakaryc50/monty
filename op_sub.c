#include "monty.h"

/**
 * op_sub - sub the top two elements on the stack
 * @stack: stack pointer
 * @line_number: line number
 */
void op_sub(stack_t **stack, unsigned int line_number)
{
	int to_sub = 0;

	if (!(*stack && *stack != (*stack)->next))
		pfailure("L%u: can't sub, stack too short\n", line_number);

	to_sub = (*stack)->n;

	op_pop(stack, line_number);

	(*stack)->n -= to_sub;
}
