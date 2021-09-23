#include "monty.h"

/**
 * op_mod - mod the top two elements on the stack
 * @stack: stack pointer
 * @line_number: line number
 */
void op_mod(stack_t **stack, unsigned int line_number)
{
	int to_mod = 0;

	if (!(*stack && *stack != (*stack)->next))
		pfailure("L%u: can't mod, stack too short\n", line_number);

	to_mod = (*stack)->n;
	if (!to_mod)
		pfailure("L%u: division by zero\n", line_number);

	op_pop(stack, line_number);

	(*stack)->n %= to_mod;
}
