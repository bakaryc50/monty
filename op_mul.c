#include "monty.h"

/**
 * op_mul - mul the top two elements on the stack
 * @stack: stack pointer
 * @line_number: line number
 */
void op_mul(stack_t **stack, unsigned int line_number)
{
	int to_mul = 0;

	if (!(*stack && *stack != (*stack)->next))
		pfailure("L%u: can't mul, stack too short\n", line_number);

	to_mul = (*stack)->n;

	op_pop(stack, line_number);

	(*stack)->n *= to_mul;
}

