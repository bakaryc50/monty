#include "monty.h"

/**
 * op_div - div the top two elements on the stack
 * @stack: stack pointer
 * @line_number: line number
 */
void op_div(stack_t **stack, unsigned int line_number)
{
	int to_div = 0;

	if (!(*stack && *stack != (*stack)->next))
		pfailure("L%u: can't div, stack too short\n", line_number);

	to_div = (*stack)->n;
	if (!to_div)
		pfailure("L%u: division by zero\n", op_env.lineno);

	op_pop(stack, line_number);

	(*stack)->n /= to_div;
}
