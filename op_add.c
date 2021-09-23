#include "monty.h"

/**
 * op_add - add the top two elements on the stack
 * @stack: stack pointer
 * @line_number: line number
 */
void op_add(stack_t **stack, unsigned int line_number)
{
	int to_add = 0;

	if (!(*stack && *stack != (*stack)->next))
		pfailure("L%u: can't add, stack too short\n", line_number);

	to_add = (*stack)->n;

	op_pop(stack, line_number);

	(*stack)->n += to_add;
}
